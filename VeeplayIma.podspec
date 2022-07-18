Pod::Spec.new do |s|
  s.name             = "VeeplayIma"
  s.version          = "1.2.1"
  s.summary          = "Veeplay Google IMA SDK Plugin"
  s.homepage         = "http://veeplay.com"
  s.license          = { :type => "Commercial", :text => "Contact office@veeplay.com" }
  s.author           = { "Veeplay" => "gabi@veeplay.com" }
  s.source           = { :git => "https://github.com/veeplay/ima-support-ios.git", :tag => s.version.to_s }

  s.platform     = :ios, "11.0"
  s.requires_arc = true

  s.documentation_url = 'http://veeplay.github.io/ima-support-ios/'

  s.source_files         = "Headers/*.h"
  s.public_header_files  = "Headers/*.h"
  s.vendored_libraries   = "libVeeplayIma.a"

  s.dependency "Veeplay"
  s.dependency "GoogleAds-IMA-iOS-SDK", "~> 3.14.5"
end
