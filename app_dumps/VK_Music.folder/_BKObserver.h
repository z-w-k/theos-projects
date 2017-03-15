/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface _BKObserver : XXUnknownSuperclass {
	BOOL _isObserving;
	id _observee;
	NSMutableArray* _keyPaths;
	id _task;
	int _context;
}
@property(readonly, assign, nonatomic) int context;
@property(readonly, assign, nonatomic) id task;
@property(readonly, assign, nonatomic) NSMutableArray* keyPaths;
@property(readonly, assign, nonatomic) id observee;
-(void).cxx_destruct;
-(void)dealloc;
-(void)stopObserving;
-(void)_stopObservingLocked;
-(void)stopObservingKeyPath:(id)path;
-(void)startObservingWithOptions:(unsigned)options;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(id)initWithObservee:(id)observee keyPaths:(id)paths context:(int)context task:(id)task;
@end
