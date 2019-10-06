#ifndef _CISCO_IOS_XE_POE_OPER_
#define _CISCO_IOS_XE_POE_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_poe_oper {

class PoeOperData : public ydk::Entity
{
    public:
        PoeOperData();
        ~PoeOperData();

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

        class PoePort; //type: PoeOperData::PoePort

        ydk::YList poe_port;
        
}; // PoeOperData


class PoeOperData::PoePort : public ydk::Entity
{
    public:
        PoePort();
        ~PoePort();

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

        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf poe_intf_enabled; //type: boolean
        ydk::YLeaf power_used; //type: decimal64
        ydk::YLeaf pd_class; //type: IlpowerPdClass

}; // PoeOperData::PoePort

class IlpowerPdClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf poe_null;
        static const ydk::Enum::YLeaf poe_unknown;
        static const ydk::Enum::YLeaf poe_cisco;
        static const ydk::Enum::YLeaf poe_ieee0;
        static const ydk::Enum::YLeaf poe_ieee1;
        static const ydk::Enum::YLeaf poe_ieee2;
        static const ydk::Enum::YLeaf poe_ieee3;
        static const ydk::Enum::YLeaf poe_ieee4;
        static const ydk::Enum::YLeaf poe_ieee5;
        static const ydk::Enum::YLeaf poe_ieee_unknown_class;

        static int get_enum_value(const std::string & name) {
            if (name == "poe-null") return 0;
            if (name == "poe-unknown") return 1;
            if (name == "poe-cisco") return 2;
            if (name == "poe-ieee0") return 3;
            if (name == "poe-ieee1") return 4;
            if (name == "poe-ieee2") return 5;
            if (name == "poe-ieee3") return 6;
            if (name == "poe-ieee4") return 7;
            if (name == "poe-ieee5") return 8;
            if (name == "poe-ieee-unknown-class") return 9;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_POE_OPER_ */

