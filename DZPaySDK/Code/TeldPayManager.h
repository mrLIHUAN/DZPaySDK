//
//  TeldPayManager.h
//  WxPay
//
//  Created by apple on 16/3/9.
//  Copyright © 2016年 apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WXApi.h"
#import <AlipaySDK/AlipaySDK.h>

//新添加的代理
@protocol TeldPaySDKDelegate <NSObject>

/**
 *  @author 李欢, 16-03-10 13:03:30
 *
 *  支付宝或微信支付成功、失败、取消的回调方法
 *
 *  @param result 分别对应success、failure、cancel
 */
-(void)TeldPaySDKcallback:(NSString*)result channel:(NSString*)channel;

@end

@interface TeldPayManager : NSObject<WXApiDelegate>

@property(nonatomic,assign)id<TeldPaySDKDelegate> delegate;
//负责WX、ALI的回调
+ (instancetype)sharedManager;


#pragma mark - 请勿主动调用
- (void)payResult:(NSString*)result channel:(NSString*)channel;


@end
