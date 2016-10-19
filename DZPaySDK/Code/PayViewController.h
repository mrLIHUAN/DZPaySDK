//
//  PayViewController.h
//  WxPay
//
//  Created by apple on 16/3/9.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "UNWebView.h"
#import "TeldPay.h"
#import "TeldPayManager.h"

//弃用

//@protocol TeldPayDelegate <NSObject>
//
///**
// *  @author 李欢, 16-03-10 13:03:30
// *
// *  支付宝或微信支付成功、失败、取消的回调方法
// *
// *  @param result 分别对应success、failure、cancel
// */
//-(void)callback:(NSString*)result channel:(NSString*)channel;
//
//@end
@interface PayViewController : UIViewController


/**设置银联导航栏颜色*/
//@property(nonatomic,strong)UIColor *UNNavColor;
/**设置title文字*/
@property(nonatomic,strong)NSString *titleText;

//调用支付的app注册在info.plist中的scheme(*必填*)
@property(nonatomic,strong)NSString *appScheme;

//@property(nonatomic,assign)id<TeldPayDelegate> delegate;

/**
 *  @author 李欢, 16-06-16 10:06:55
 *
 *  用户进入支付渠道的唯一方法
 *
 *  @param mchChargeView ----支付中心Api(必填)
 *  @param mchChargeApi------商户付款地址(必填)
 *  @param channel-----------用户选择的支付渠道 'WX ALI UN'样式必须是这样的
 *  @param amount------------用户付款金额(必填)
 *  @param extra-------------可拓展参数
 *  @param registerWxAppID-------微信注册的appID
 */
-(void)payWithmchChargeView:(NSString *)mchChargeView mchChargeApi:(NSString *)mchChargeApi channel:(NSString *)channel amount:(NSString *)amount extra:(NSDictionary*)extra registerWxAppID:(NSString*)registerWxAppID;


@end
