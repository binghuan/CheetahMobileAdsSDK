
#
# Be sure to run `pod lib lint ALSAlipay.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CheetahMobileAdsSDK'
  s.version          = '2.0.2'
  s.summary          = 'This is a short description of CheetahMobileAdsSDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
This is a long description of the pod here. This is a long description of the pod here.
                       DESC

  s.homepage         = 'https://cheetahmobile.gitbook.io/cheetah-ads-for-ios/'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license      = { :type => 'Apache License, Version 2.0', :text => <<-LICENSE
    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
    LICENSE
  }
  s.author           = { 'BH_Lin' => 'binghuanlin@gmail.com' }
  s.source           = { :git => 'https://github.com/binghuan/CheetahMobileAdsSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.platform          = :ios
  s.ios.deployment_target = '8.0'

  s.source_files = 'CheetahMobileAdsSDK/Frameworks/**/*.{h}'
  s.ios.public_header_files = 'CheetahMobileAdsSDK/Frameworks/**/*.{h}'
  s.ios.vendored_frameworks = 'CheetahMobileAdsSDK/Frameworks/*.{framework}'
  s.ios.resources = 'CheetahMobileAdsSDK/Assets/*.{png,jpg,bundle}'
  #s.frameworks = 'SystemConfiguration','CoreTelephony','CoreMotion'
  #s.ios.libraries = 'c++.1','z.1.2.8'
  s.xcconfig = { "OTHER_LINK_FLAG" => '$(inherited) -ObjC'}

end