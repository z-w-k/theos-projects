/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSError;

__attribute__((visibility("hidden")))
@interface VK_CountResult : XXUnknownSuperclass {
	unsigned _count;
	NSError* _error;
}
@property(retain, nonatomic) NSError* error;
@property(assign, nonatomic) unsigned count;
+(id)resultWithCount:(unsigned)count error:(id)error;
-(void).cxx_destruct;
-(id)initWithCount:(unsigned)count error:(id)error;
@end
