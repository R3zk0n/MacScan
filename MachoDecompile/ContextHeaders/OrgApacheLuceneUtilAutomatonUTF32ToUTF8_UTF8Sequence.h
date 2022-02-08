// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILAUTOMATONUTF32TOUTF8_UTF8SEQUENCE_H
#define ORGAPACHELUCENEUTILAUTOMATONUTF32TOUTF8_UTF8SEQUENCE_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"

@interface OrgApacheLuceneUtilAutomatonUTF32ToUTF8_UTF8Sequence : NSObject {
    IOSObjectArray *bytes_;
    int len_;
}




-(id)init;
-(int)byteAtWithInt:(int)arg0 ;
-(int)numBitsWithInt:(int)arg0 ;
-(void)setWithInt:(int)arg0 ;
-(void)setRestWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)description;
-(void)dealloc;


@end


#endif