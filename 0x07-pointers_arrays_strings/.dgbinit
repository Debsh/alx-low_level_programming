set disassembly-flavor intel # Intel syntax is better
set disassemble-next-line on
catch syscall ptrace #Catch the syscall.
commands 1
set ($eax) = 0
continue
end
