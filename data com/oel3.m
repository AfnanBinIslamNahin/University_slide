clc;
clear all;
close all;

S1 = [1 0 1 1 0];        
S2 = [0 1 0 1 1];        
bp = 1;                 
f1 = 10;                 
f2 = 30;                 
A = 5;                  
t_bit = 0:0.01:bp;       


signal1 = [];
signal2 = [];
for i = 1:length(S1)
    if S1(i) == 1
        sig1 = A * sin(2*pi*f1*t_bit);
    else
        sig1 = zeros(1, length(t_bit));
    end
    if S2(i) == 1
        sig2 = A * sin(2*pi*f2*t_bit);
    else
        sig2 = zeros(1, length(t_bit));
    end
    signal1 = [signal1 sig1];
    signal2 = [signal2 sig2];
end

composite_signal = signal1 + signal2;


recovered_S1 = [];
recovered_S2 = [];

for i = 1:length(S1)
  
    idx = (i-1)*length(t_bit)+1 : i*length(t_bit);
    segment = composite_signal(idx);

   
    ref1 = sin(2*pi*f1*t_bit);
    result1 = trapz(t_bit, segment .* ref1);
    recovered_S1 = [recovered_S1 result1 > 2]; 

    ref2 = sin(2*pi*f2*t_bit);
    result2 = trapz(t_bit, segment .* ref2);
    recovered_S2 = [recovered_S2 result2 > 2];  
end

disp('Recovered Signal S1:');
disp(recovered_S1);
disp('Recovered Signal S2:');
disp(recovered_S2);

figure;
subplot(2,1,1);
stairs(recovered_S1, 'LineWidth', 2);
title('Recovered Digital Signal S1');
ylim([-0.5 1.5]); grid on;

subplot(2,1,2);
stairs(recovered_S2, 'LineWidth', 2);
title('Recovered Digital Signal S2');
ylim([-0.5 1.5]); grid on;
