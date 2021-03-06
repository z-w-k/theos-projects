/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VKClientDelegate.h"

@class NSMutableDictionary, NSString, VKClient, RMPhoneFormat, UIAlertView, CaptchaPrompt, NSDate;

__attribute__((visibility("hidden")))
@interface AuthModel : XXUnknownSuperclass <VKClientDelegate> {
	VKClient* _client;
	VKClient* _oauthClient;
	RMPhoneFormat* _formatter;
	NSString* _deviceTrustedHash;
	BOOL _voiceRequested;
	BOOL _forceProcessSignup;
	int _task;
	NSMutableDictionary* _data;
	NSDate* _sentCodeTime;
	id _handler;
	CaptchaPrompt* _captcha;
	UIAlertView* _lastAlertView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(copy, nonatomic) id handler;
@property(readonly, retain, nonatomic) VKClient* oauthClient;
@property(readonly, retain, nonatomic) VKClient* client;
@property(readonly, retain, nonatomic) RMPhoneFormat* formatter;
@property(assign, nonatomic) BOOL forceProcessSignup;
@property(assign, nonatomic) BOOL voiceRequested;
@property(retain, nonatomic) NSDate* sentCodeTime;
@property(readonly, retain, nonatomic) NSMutableDictionary* data;
@property(assign, nonatomic) int task;
@property(retain, nonatomic) UIAlertView* lastAlertView;
@property(copy, nonatomic) NSString* deviceTrustedHash;
@property(retain, nonatomic) CaptchaPrompt* captcha;
+(id)base64ReceiptString;
+(void)resetDeviceTrustedHash;
+(void)handleAuthError:(id)error block:(id)block;
+(id)secondFAAuthModelWithData:(id)data login:(id)login password:(id)password sid:(id)sid;
-(void).cxx_destruct;
-(void)oauth:(id)oauth showHUDMessage:(BOOL)message success:(id)success failure:(id)failure;
-(void)facebook:(id)facebook code:(id)code success:(id)success failure:(id)failure;
-(void)restore:(id)restore code:(id)code success:(id)success failure:(id)failure;
-(void)login:(id)login password:(id)password code:(id)code success:(id)success failure:(id)failure;
-(void)login:(id)login password:(id)password code:(id)code showHUDMessage:(BOOL)message success:(id)success failure:(id)failure;
-(id)oauthParams;
-(id)messageForOAuthError:(int)oauthError;
-(void)changePasswordWithText:(id)text success:(id)success failure:(id)failure;
-(void)confirm:(id)confirm failure:(id)failure;
-(void)acceptPhone:(BOOL)phone success:(id)success failure:(id)failure;
-(void)completeWithUserId:(id)userId token:(id)token;
-(void)showAlertView:(id)view;
-(void)clearAlertView:(BOOL)view;
-(void)client:(id)client requestedTokenConfirmationWithComplete:(id)complete;
-(void)client:(id)client requestedValidation:(id)validation complete:(id)complete;
-(void)client:(id)client requestedCaptcha:(id)captcha complete:(id)complete;
-(void)clientEncounteredAuthProblem:(id)problem;
-(id)validateRestore;
-(id)validatePasswordStage;
-(id)validateCodeStage;
-(id)validatePhoneStage;
-(id)validateNameStage;
-(id)validate:(id)validate;
-(id)formattedPhoneNumber;
-(id)rawPhoneNumber;
-(void)update:(int)update value:(id)value;
-(void)dealloc;
-(id)init;
@end

