/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UsersSelectionController.h"
#import "VKClient-Structs.h"

@protocol PrivacyUsersSelectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface PrivacyUsersSelectionController : UsersSelectionController {
	BOOL _shouldAutoclose;
	id<PrivacyUsersSelectionControllerDelegate> _delegate;
}
@property(assign, nonatomic) BOOL shouldAutoclose;
@property(assign, nonatomic) __weak id<PrivacyUsersSelectionControllerDelegate> delegate;
-(void).cxx_destruct;
-(id)setupWithMulti:(BOOL)multi shouldAutoclose:(BOOL)autoclose;
-(void)VKMDismissModalSelfAnimated;
-(void)routeUsers:(id)users;
@end

