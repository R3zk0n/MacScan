// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef PERDOCUMENTOBJECTS_H
#define PERDOCUMENTOBJECTS_H


#import <CoreFoundation/CoreFoundation.h>

#import "ContextEngine.h"

@interface PerDocumentObjects : ContextEngine

@property (retain, nonatomic) NSMutableArray *phrases; // ivar: _phrases
@property (retain, nonatomic) NSMutableArray *terms; // ivar: _terms
@property (retain, nonatomic) NSMutableArray *secondary; // ivar: _secondary


-(id)init;
-(NSUInteger)primaryCount;
-(void)seal;
-(NSUInteger)queryFingerprintWithPrimaryOut:(*NSUInteger)arg0 ;


@end


#endif