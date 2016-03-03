#import <Foundation/Foundation.h>
#import "ASPObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "ASPResourceUriElement.h"
#import "ASPResourceUri.h"


@protocol ASPSlide
@end

@interface ASPSlide : ASPObject


@property(nonatomic) NSNumber* width;

@property(nonatomic) NSNumber* height;

@property(nonatomic) ASPResourceUriElement* shapes;

@property(nonatomic) ASPResourceUriElement* theme;

@property(nonatomic) ASPResourceUriElement* placeholders;

@property(nonatomic) ASPResourceUriElement* images;

@property(nonatomic) ASPResourceUriElement* comments;

@property(nonatomic) ASPResourceUriElement* background;

@property(nonatomic) ASPResourceUri* selfUri;

@property(nonatomic) NSArray<ASPResourceUri>* alternateLinks;

@property(nonatomic) NSArray<ASPResourceUri>* links;

@end
