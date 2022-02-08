// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef WORDLIST_H
#define WORDLIST_H


#import <Foundation/Foundation.h>
#import <CoreFoundation/CoreFoundation.h>


@interface Wordlist : NSObject

@property (retain, nonatomic) NSMutableDictionary *words; // ivar: _words


-(id)initWithPathToStopwords:(id)arg0 pathToAuxiliary:(id)arg1 ;
-(void)updateFromPath:(id)arg0 value:(id)arg1 ;


@end


#endif