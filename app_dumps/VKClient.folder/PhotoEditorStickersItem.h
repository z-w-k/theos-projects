/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "VKDomain.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PhotoEditorStickersItem : VKDomain {
	NSString* _baseURL;
	NSArray* _stickerIds;
}
@property(retain, nonatomic) NSArray* stickerIds;
@property(retain, nonatomic) NSString* baseURL;
+(id)parse:(id)parse;
-(void).cxx_destruct;
@end
