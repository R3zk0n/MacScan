// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXLEAFREADER_LEAFREADERCLOSEDLISTENER_H
#define ORGAPACHELUCENEINDEXLEAFREADER_LEAFREADERCLOSEDLISTENER_H


#import <Foundation/Foundation.h>

#import "JavaLangRefWeakReference.h"
#import "OrgApacheLuceneIndexIndexReader_ReaderClosedListener-Protocol.h"

@interface OrgApacheLuceneIndexLeafReader_LeafReaderClosedListener : NSObject <OrgApacheLuceneIndexIndexReader_ReaderClosedListener>

 {
    JavaLangRefWeakReference *weakRef_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexLeafReader:(id)arg0 ;
-(void)onCloseWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(void)dealloc;


@end


#endif