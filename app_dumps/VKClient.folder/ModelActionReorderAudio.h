/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ModelActionReorder.h"

@class VKIdentity;

__attribute__((visibility("hidden")))
@interface ModelActionReorderAudio : ModelActionReorder {
	VKIdentity* _playlistIden;
}
@property(retain, nonatomic) VKIdentity* playlistIden;
+(int)domainType;
-(void).cxx_destruct;
-(BOOL)actionResultForData:(id)data context:(id)context;
-(id)actionRequestForContext:(id)context;
@end
