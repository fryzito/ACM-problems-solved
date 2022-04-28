program ScPascal;
var i,n:longInt;

begin
	readln(n);
	for i := 1 to n do
		begin
			n := n + i;
		end;
	writeln(n);
end.