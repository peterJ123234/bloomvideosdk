#
# Be sure to run `pod lib lint BloomVideoSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'BloomVideoSDK'
  s.version          = '1.0.0.21'
  s.summary          = 'A short video sdk with Ads'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
A short video sdk with Ads.
                       DESC

  s.homepage         = 'https://github.com/peterJ123234/bloomvideosdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Peter' => 'peterwu@bloomadtech.com' }
  s.source           = { :git => 'https://github.com/peterJ123234/bloomvideosdk.git', :tag => s.version.to_s }

  
  s.ios.deployment_target = '9.0'
  
  s.vendored_frameworks = 'BloomVideoSDK/SDK/BloomVideoSDK.framework'
  s.dependency 'LKADSDK'
end
