// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTPARSEPOSITION_H
#define JAVATEXTPARSEPOSITION_H


#import <Foundation/Foundation.h>


@interface JavaTextParsePosition : NSObject {
    int currentPosition_;
    int errorIndex_;
}




-(id)initWithInt:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(int)getErrorIndex;
-(int)getIndex;
-(NSUInteger)hash;
-(void)setErrorIndexWithInt:(int)arg0 ;
-(void)setIndexWithInt:(int)arg0 ;
-(id)description;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif