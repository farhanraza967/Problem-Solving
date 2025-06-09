clc;
clear;

% === Initialize given values ===
f = 50;                      % Frequency in Hz
t = 0:0.0001:0.01;           % Time vector (0 to 10 ms in steps of 0.1 ms)
w = 2 * pi * f;              % Angular frequency
VL = 207.85;                 % Line-to-line voltage

ZL = 2 + 1j*4;               % Line impedance
ZYL = 30 + 1j*40;            % Load impedance (Y-connection)
ZDelta = 60 - 1j*45;         % Load impedance (Delta-connection)

% === Convert Delta load to equivalent Y-load ===
ZYL = ZDelta / 3;

% === Voltage and current calculations ===
VP = VL / sqrt(3);           % Phase voltage

% Total impedance seen by source
ZT = ZL + ZYL + ZYL;         
IP = VP / ZT;                % Phase current

% Voltage drop and load voltage
VD = IP * ZL;
VL = VP - VD;

IY1 = VL / ZYL;              % Current in first Y-load branch
IY2 = VL / ZYL;              % Current in second Y-load branch
IDeltaline = sqrt(3) * IY2;  % Line current for Delta load

% === Power Calculations ===
S = 3 * VP * conj(IP);       % Apparent power (VA)
P = real(S);                 % Real power (W)
Q = imag(S);                 % Reactive power (VAR)

% Power consumed by each load type
PY1 = 3 * abs(IY1)^2 * ZYL;
PY2 = 3 * abs(IY2)^2 * ZYL;
PL  = 3 * abs(IP)^2 * ZL;
Ptotal = PY1 + PY2 + PL;

% === Display Results ===
disp('<<<<<<<<<<<<<<<<<RESULTS>>>>>>>>>>>>>>>>>>');
fprintf('Phase Current: %.2f < %.2f° A\n', abs(IP), angle(IP) * 180 / pi);
fprintf('Load Phase Voltage: %.2f < %.2f° V\n', abs(VL), angle(VL) * 180 / pi);
fprintf('Total Real Power: %.2f W\n', P);
fprintf('Total Reactive Power: %.2f VAR\n', Q);
fprintf('Power in Y Load: %.2f + j%.2f VA\n', real(PY1), imag(PY1));
fprintf('Power in Delta Load: %.2f + j%.2f VA\n', real(PY2), imag(PY2));
fprintf('Power in Line: %.2f + j%.2f VA\n', real(PL), imag(PL));
fprintf('Total Power Supplied: %.2f + j%.2f VA\n', real(S), imag(S));
fprintf('Total Power Consumed: %.2f + j%.2f VA\n', real(Ptotal), imag(Ptotal));
disp('<<<<<<<<<<<<<<<<<End>>>>>>>>>>>>>>>>>>');

% === Signal Calculations for Plotting ===
v_phase = abs(VP) * sin(w * t + angle(VP));
v_load  = abs(VL) * sin(w * t + angle(VL));
i_phase = abs(IP) * sin(w * t + angle(IP));
i_delta = abs(IDeltaline) * sin(w * t + angle(IY2));

% === Plot Results ===
figure;

subplot(2, 2, 1);
plot(t * 1000, v_phase, 'b');
title('Phase Voltage (VP)');
xlabel('Time (ms)');
ylabel('Voltage (V)');
grid on;

subplot(2, 2, 2);
plot(t * 1000, v_load, 'g');
title('Load Voltage (VL)');
xlabel('Time (ms)');
ylabel('Voltage (V)');
grid on;

subplot(2, 2, 3);
plot(t * 1000, i_phase, 'r');
title('Phase Current (IP)');
xlabel('Time (ms)');
ylabel('Current (A)');
grid on;
