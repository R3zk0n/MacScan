// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISUTILCHARACTERUTILS_CHARACTERBUFFER_H
#define ORGAPACHELUCENEANALYSISUTILCHARACTERUTILS_CHARACTERBUFFER_H


#import <Foundation/Foundation.h>

#import "IOSCharArray.h"

@interface OrgApacheLuceneAnalysisUtilCharacterUtils_CharacterBuffer : NSObject {
    unsigned short lastTrailingHighSurrogate_;
    IOSCharArray *buffer_;
    int offset_;
    int length_;
}




-(id)initWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getBuffer;
-(int)getOffset;
-(int)getLength;
-(void)reset;
-(void)dealloc;


@end


#endif