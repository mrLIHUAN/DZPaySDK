Pod::Spec.new do |s|  
  s.name             = "DZPaySDK" 
  s.version          = "1.0.2" 
  s.summary          = "支付中心"  
  s.homepage         = "https://github.com/mrLIHUAN/DZPaySDK"   
  s.license          = 'MIT'  
  s.author           = { "mrLIHUAN" => "1139116598@qq.com" }  
  s.source           = { :git => "https://github.com/mrLIHUAN/DZPaySDK.git", :tag => s.version.to_s }   
  s.requires_arc = true
  #s.source_files = 'TeldPaySDK/*.*', 'TeldPaySDK/**.*'
  s.default_subspec = 'AliPay15.1.6', 'SDK1.6.2', 'pic', 'Code'
  s.ios.deployment_target = '8.0'
  #s.frameworks = 'SystemConfiguration','CoreGraphics', 'UIKit', 'CoreTelephony','CoreText','CoreMotion','QuartzCore','CFNetwork','JavaScriptCore'
  s.libraries = 'z', 'c++', 'sqlite3'

s.subspec 'Code' do |code|
 code.source_files = 'DZPaySDK/Code/*.h'
 code.public_header_files = 'DZPaySDK/Code/*.h'
 code.vendored_libraries = 'DZPaySDK/Code/*.a'
 code.frameworks = 'SystemConfiguration','CoreGraphics', 'UIKit', 'CoreTelephony','CoreText','CoreMotion','QuartzCore','CFNetwork','JavaScriptCore'
end

s.subspec 'AliPay15.1.6' do |ss|
    ss.ios.vendored_frameworks = 'DZPaySDK/AliPay15.1.6/AlipaySDK.framework'
    ss.resource = 'DZPaySDK/AliPay15.1.6/AlipaySDK.bundle'
end 

s.subspec 'SDK1.6.2' do |ss|
    ss.resource = 'DZPaySDK/SDK1.6.2/*.*'

end 

s.subspec 'pic' do |ss|
    ss.resource = 'DZPaySDK/pic/*.*'

end 


end 