// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISTOKENIZER_H
#define ORGAPACHELUCENEANALYSISTOKENIZER_H



#import "OrgApacheLuceneAnalysisTokenStream.h"
#import "JavaIoReader.h"

@interface OrgApacheLuceneAnalysisTokenizer : OrgApacheLuceneAnalysisTokenStream {
    JavaIoReader *input_;
    JavaIoReader *inputPending_;
}




-(id)init;
-(id)initWithOrgApacheLuceneUtilAttributeFactory:(id)arg0 ;
-(void)close;
-(int)correctOffsetWithInt:(int)arg0 ;
-(void)setReaderWithJavaIoReader:(id)arg0 ;
-(void)reset;
-(void)setReaderTestPoint;
-(void)dealloc;
+(void)initialize;


@end


#endif