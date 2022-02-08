// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXTERM_H
#define ORGAPACHELUCENEINDEXTERM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBytesRef.h"
#import "JavaLangComparable-Protocol.h"

@interface OrgApacheLuceneIndexTerm : NSObject <JavaLangComparable>

 {
    NSString *field_;
    OrgApacheLuceneUtilBytesRef *bytes_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(id)field;
-(id)text;
-(id)bytes;
-(BOOL)isEqual:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(void)setWithNSString:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(void)dealloc;
+(id)toStringWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;


@end


#endif