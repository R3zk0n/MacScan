// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISREUSABLESTRINGREADER_H
#define ORGAPACHELUCENEANALYSISREUSABLESTRINGREADER_H


#import <Foundation/Foundation.h>

#import "JavaIoReader.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneAnalysisReusableStringReader : JavaIoReader <AutoreleaseLiteSupport>

 {
    uint8_t _autoreleaseLiteLastPoolId;
    int pos_;
    int size_;
    NSString *s_;
}




-(id)autorelease;
-(void)setValueWithNSString:(id)arg0 ;
-(int)read;
-(int)readWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)close;
-(id)init;
-(void)dealloc;


@end


#endif