// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISANALYZER_H
#define ORGAPACHELUCENEANALYSISANALYZER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilCloseableThreadLocal.h"
#import "OrgApacheLuceneAnalysisAnalyzer_ReuseStrategy.h"
#import "OrgApacheLuceneUtilVersion.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneAnalysisAnalyzer : NSObject <JavaIoCloseable>

 {
    OrgApacheLuceneUtilCloseableThreadLocal *storedValue_;
    OrgApacheLuceneAnalysisAnalyzer_ReuseStrategy *reuseStrategy_;
    OrgApacheLuceneUtilVersion *version__;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithOrgApacheLuceneAnalysisAnalyzer_ReuseStrategy:(id)arg0 ;
-(id)tokenStreamWithNSString:(id)arg0 withJavaIoReader:(id)arg1 ;
-(id)tokenStreamWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initReaderWithNSString:(id)arg0 withJavaIoReader:(id)arg1 ;
-(int)getPositionIncrementGapWithNSString:(id)arg0 ;
-(int)getOffsetGapWithNSString:(id)arg0 ;
-(id)getReuseStrategy;
-(void)setVersionWithOrgApacheLuceneUtilVersion:(id)arg0 ;
-(id)getVersion;
-(void)close;
-(void)dealloc;
+(void)initialize;


@end


#endif