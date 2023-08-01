#!/usr/bin/env ruby
# whatever

puts ARGV[0].scan(/(?<=from:|to:|flags:).+?(?=\])/).join(',')
