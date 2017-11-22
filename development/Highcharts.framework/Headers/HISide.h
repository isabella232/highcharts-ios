/**
* (c) 2009-2017 Highsoft AS
*
* License: www.highcharts.com/license
* For commercial usage, a valid license is required. To purchase a license for Highcharts iOS, please see our website: https://shop.highsoft.com/
* In case of questions, please contact sales@highsoft.com
*/

#import "HIChartsJSONSerializable.h"
#import "HIColor.h"


/**
* description: Note: As of v5.0.12, frame.left or frame.right should be used
instead.
The side for the frame around a 3D chart.
*/
@interface HISide: HIChartsJSONSerializable

/**
* description: The color of the panel.
* default: transparent
*/
@property(nonatomic, readwrite) HIColor *color;
/**
* description: The thickness of the panel.
* default: 1
*/
@property(nonatomic, readwrite) NSNumber *size;

-(NSDictionary *)getParams;

@end
