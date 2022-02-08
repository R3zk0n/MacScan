// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISTOKENSTREAM_H
#define ORGAPACHELUCENEANALYSISTOKENSTREAM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilAttributeSource.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneAnalysisTokenStream : OrgApacheLuceneUtilAttributeSource <JavaIoCloseable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgApacheLuceneUtilAttributeSource:(id)arg0 ;
-(id)initWithOrgApacheLuceneUtilAttributeFactory:(id)arg0 ;
-(BOOL)assertFinal;
-(void)end;
-(void)reset;
-(void)close;
+(void)initialize;


@end


#endif