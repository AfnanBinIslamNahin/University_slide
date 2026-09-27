
clc;
clear all;
close all;

S1 = [1 0 1 1 0 0 1 0];
S2 = [0 1 0 0 1 1 0 1];

A = 5;                  
bp = 1;                 
fs = 1000;             
f1 = 10;              
f2 = 30;               
t_bit = 0:1/fs:bp-1/fs; 

ask_s1 = [];
for i = 1:length(S1)
    if S1(i) == 1
        y = A * sin(2*pi*f1*t_bit);
    else
        y = zeros(1, length(t_bit));
    end
    ask_s1 = [ask_s1 y];
end

ask_s2 = [];
for i = 1:length(S2)
    if S2(i) == 1
        y = A * sin(2*pi*f2*t_bit);
    else
        y = zeros(1, length(t_bit));
    end
    ask_s2 = [ask_s2 y];
end

t_total = 0:1/fs:bp*length(S1)-1/fs;

composite_signal = ask_s1 + ask_s2;

figure;
subplot(3,1,1);
plot(t_total, ask_s1, 'b');
title('ASK Modulated Signal S1 (f = 10 Hz)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

subplot(3,1,2);
plot(t_total, ask_s2, 'r');
title('ASK Modulated Signal S2 (f = 30 Hz)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;

subplot(3,1,3);
plot(t_total, composite_signal, 'k');
title('FDM Composite Signal (S1 + S2)');
xlabel('Time (s)');
ylabel('Amplitude');
grid on;