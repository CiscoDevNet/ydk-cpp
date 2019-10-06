#ifndef _CISCO_IOS_XE_ARP_OPER_
#define _CISCO_IOS_XE_ARP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace Cisco_IOS_XE_arp_oper {

class ArpData : public ydk::Entity
{
    public:
        ArpData();
        ~ArpData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class ArpVrf; //type: ArpData::ArpVrf

        ydk::YList arp_vrf;
        
}; // ArpData


class ArpData::ArpVrf : public ydk::Entity
{
    public:
        ArpVrf();
        ~ArpVrf();

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

        ydk::YLeaf vrf; //type: string
        class ArpOper; //type: ArpData::ArpVrf::ArpOper

        ydk::YList arp_oper;
        
}; // ArpData::ArpVrf


class ArpData::ArpVrf::ArpOper : public ydk::Entity
{
    public:
        ArpOper();
        ~ArpOper();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf enctype; //type: IosEncapsType
        ydk::YLeaf interface; //type: string
        ydk::YLeaf type; //type: IosLinktype
        ydk::YLeaf mode; //type: IosArpMode
        ydk::YLeaf hwtype; //type: IosSnpaType
        ydk::YLeaf hardware; //type: string
        ydk::YLeaf time; //type: string

}; // ArpData::ArpVrf::ArpOper

class IosArpMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ios_arp_mode_null;
        static const ydk::Enum::YLeaf ios_arp_mode_dynamic;
        static const ydk::Enum::YLeaf ios_arp_mode_incomplete;
        static const ydk::Enum::YLeaf ios_arp_mode_interface;
        static const ydk::Enum::YLeaf ios_arp_mode_static;
        static const ydk::Enum::YLeaf ios_arp_mode_alias;
        static const ydk::Enum::YLeaf ios_arp_mode_app_simple;
        static const ydk::Enum::YLeaf ios_arp_mode_app_alias;
        static const ydk::Enum::YLeaf ios_arp_mode_app_timer;

        static int get_enum_value(const std::string & name) {
            if (name == "ios-arp-mode-null") return 0;
            if (name == "ios-arp-mode-dynamic") return 1;
            if (name == "ios-arp-mode-incomplete") return 2;
            if (name == "ios-arp-mode-interface") return 3;
            if (name == "ios-arp-mode-static") return 4;
            if (name == "ios-arp-mode-alias") return 5;
            if (name == "ios-arp-mode-app-simple") return 6;
            if (name == "ios-arp-mode-app-alias") return 7;
            if (name == "ios-arp-mode-app-timer") return 8;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_ARP_OPER_ */

