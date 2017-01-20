/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "InvitationAction.h"
#import "MFMailComposeViewControllerDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MailInvitationAction : InvitationAction <MFMailComposeViewControllerDelegate> {
	NSString* _contact;
	NSString* _subject;
	NSString* _message;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSString* message;
@property(retain, nonatomic) NSString* subject;
@property(retain, nonatomic) NSString* contact;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)runInContext:(id)context;
-(void)dealloc;
@end
