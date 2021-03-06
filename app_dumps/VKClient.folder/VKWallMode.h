/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKRenderable.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VKWallMode : VKRenderable {
	BOOL _show_post;
	BOOL _owner_only;
	BOOL _can_see_all_posts;
	NSNumber* _owner;
	NSString* _user_name_case;
	int _access_mode;
	int _groupType;
}
@property(assign, nonatomic) int groupType;
@property(assign, nonatomic) int access_mode;
@property(assign, nonatomic) BOOL can_see_all_posts;
@property(assign, nonatomic) BOOL owner_only;
@property(assign, nonatomic) BOOL show_post;
@property(retain, nonatomic) NSString* user_name_case;
@property(retain, nonatomic) NSNumber* owner;
-(void).cxx_destruct;
-(Class)rendererClass;
@end

