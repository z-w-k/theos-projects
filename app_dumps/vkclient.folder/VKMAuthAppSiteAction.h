/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKMSiteAction.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VKMAuthAppSiteAction : VKMSiteAction {
	NSURL* _requestURL;
	NSString* _sdk_bundle;
	NSString* _access_token;
}
@property(retain, nonatomic) NSString* access_token;
@property(retain, nonatomic) NSString* sdk_bundle;
@property(retain, nonatomic) NSURL* requestURL;
+(BOOL)ensureAuthorizeURL:(id)url;
+(BOOL)handleAuthErrors:(id)errors;
+(BOOL)isAuthorizeAppURL:(id)url;
-(BOOL)webView:(id)view shouldStartLoadWithRequest:(id)request navigationType:(int)type;
-(void)cancel;
-(id)targetURL;
-(void)handleCompleteAuth:(id)auth;
-(void)dealloc;
@end
