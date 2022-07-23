def main()
	n = gets.to_i
	s = gets
	x = Array.new(n)
	y = Array.new(n)
	for i in 0...n do
		x[i] , y[i] = gets.split.map(&:to_i)
	end

	puts n
	puts s
	puts x[0]
	puts y[n - 1]
end


def solve(n)
	return 0
end

main()
