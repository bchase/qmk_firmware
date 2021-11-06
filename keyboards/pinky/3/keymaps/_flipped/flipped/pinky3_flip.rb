#!/usr/bin/env ruby


require 'pathname'
# require 'virtus'
# require 'uri'
# require 'net/http'
require 'json'
require 'ostruct'
# require 'yaml'
# require 'nokogiri'
require 'active_support/all'
# require 'active_support/core_ext/klass'
require 'pry'
module Kernel
  alias :pn :Pathname
end


# layers = JSON.parse(pn('orig/layers.json').read)
# # puts layers

# flipped = layers.map {|layer|
#   flipped = []
#   idx     = 0

#   loop do
#     row = layer.slice(idx, 14)&.compact

#     break if !row || row.empty?

#     flipped.push(row.reverse)
#     idx += 14
#   end

#   # flipped.each do |row| p row end
#   flipped.flatten
# }

# pn('flipped-layers.json').write(flipped.to_json)




lines = pn('keys.csv').readlines.map(&:chomp)
layers = lines.map {|line| line.split(/\s*,\s*/)}

flipped = layers.map {|layer|
  layer.reverse.join(', ')
}
pn('flipped-keys.csv').write(flipped.join("\n"))
