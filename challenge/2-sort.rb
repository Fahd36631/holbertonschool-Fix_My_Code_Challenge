#!/usr/bin/ruby
# Sort numeric arguments in ascending order.

numbers = ARGV.filter_map do |arg|
  Integer(arg, 10)
rescue ArgumentError
  nil
end

numbers.sort.each { |num| puts num }
