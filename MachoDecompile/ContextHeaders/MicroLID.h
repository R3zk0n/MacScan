// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef MICROLID_H
#define MICROLID_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface MicroLID : NSObject {
    *_CFBurstTrie _trie;
    NSData *_weights;
}




-(id)initWithTrie:(id)arg0 weights:(id)arg1 ;
-(void)dealloc;
-(id)languageTagForString:(id)arg0 ;
+(void)initialize;


@end


#endif