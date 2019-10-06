#ifndef _CISCO_IOS_XR_IPV6_ND_CFG_
#define _CISCO_IOS_XR_IPV6_ND_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_nd_cfg {

class Ipv6Neighbor : public ydk::Entity
{
    public:
        Ipv6Neighbor();
        ~Ipv6Neighbor();

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

        ydk::YLeaf scavenge_timeout; //type: uint32
        class Neighbors; //type: Ipv6Neighbor::Neighbors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ipv6_nd_cfg::Ipv6Neighbor::Neighbors> neighbors;
        
}; // Ipv6Neighbor


class Ipv6Neighbor::Neighbors : public ydk::Entity
{
    public:
        Neighbors();
        ~Neighbors();

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

        class Neighbor; //type: Ipv6Neighbor::Neighbors::Neighbor

        ydk::YList neighbor;
        
}; // Ipv6Neighbor::Neighbors


class Ipv6Neighbor::Neighbors::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf neighbor_address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf zone; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf encapsulation; //type: Ipv6srpEncapsulation

}; // Ipv6Neighbor::Neighbors::Neighbor

class Ipv6ndMonth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf january;
        static const ydk::Enum::YLeaf february;
        static const ydk::Enum::YLeaf march;
        static const ydk::Enum::YLeaf april;
        static const ydk::Enum::YLeaf may;
        static const ydk::Enum::YLeaf june;
        static const ydk::Enum::YLeaf july;
        static const ydk::Enum::YLeaf august;
        static const ydk::Enum::YLeaf september;
        static const ydk::Enum::YLeaf october;
        static const ydk::Enum::YLeaf november;
        static const ydk::Enum::YLeaf december;

        static int get_enum_value(const std::string & name) {
            if (name == "january") return 0;
            if (name == "february") return 1;
            if (name == "march") return 2;
            if (name == "april") return 3;
            if (name == "may") return 4;
            if (name == "june") return 5;
            if (name == "july") return 6;
            if (name == "august") return 7;
            if (name == "september") return 8;
            if (name == "october") return 9;
            if (name == "november") return 10;
            if (name == "december") return 11;
            return -1;
        }
};

class Ipv6NdRouterPref : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

        static int get_enum_value(const std::string & name) {
            if (name == "high") return 1;
            if (name == "medium") return 2;
            if (name == "low") return 3;
            return -1;
        }
};

class Ipv6srpEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srpa;
        static const ydk::Enum::YLeaf srpb;

        static int get_enum_value(const std::string & name) {
            if (name == "srpa") return 5;
            if (name == "srpb") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_CFG_ */

