// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISCHARFILTER_H
#define ORGAPACHELUCENEANALYSISCHARFILTER_H



#import "JavaIoReader.h"

@interface OrgApacheLuceneAnalysisCharFilter : JavaIoReader {
    JavaIoReader *input_;
}




-(id)initWithJavaIoReader:(id)arg0 ;
-(void)close;
-(int)correctOffsetWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif