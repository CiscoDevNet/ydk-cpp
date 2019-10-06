#ifndef _CISCO_IOS_XR_AAA_LIB_CFG_1_
#define _CISCO_IOS_XR_AAA_LIB_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_aaa_lib_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_cfg {


class Aaa::Diameter::DiameterTimer : public ydk::Entity
{
    public:
        DiameterTimer();
        ~DiameterTimer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf transaction; //type: uint32
        ydk::YLeaf connection; //type: uint32
        ydk::YLeaf watchdog; //type: uint32

}; // Aaa::Diameter::DiameterTimer


class Aaa::Diameter::Vendor : public ydk::Entity
{
    public:
        Vendor();
        ~Vendor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Supported; //type: Aaa::Diameter::Vendor::Supported

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_aaa_lib_cfg::Aaa::Diameter::Vendor::Supported> supported;
        
}; // Aaa::Diameter::Vendor


class Aaa::Diameter::Vendor::Supported : public ydk::Entity
{
    public:
        Supported();
        ~Supported();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf cisco; //type: boolean
        ydk::YLeaf threegpp; //type: boolean
        ydk::YLeaf etsi; //type: boolean
        ydk::YLeaf vodafone; //type: boolean

}; // Aaa::Diameter::Vendor::Supported


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_CFG_1_ */

