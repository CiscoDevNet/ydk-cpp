#ifndef _CISCO_IOS_XE_IPV6_OPER_
#define _CISCO_IOS_XE_IPV6_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ipv6_oper {

class Ipv6Data : public ydk::Entity
{
    public:
        Ipv6Data();
        ~Ipv6Data();

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

        class Nd6Info; //type: Ipv6Data::Nd6Info

        ydk::YList nd6_info;
        
}; // Ipv6Data


class Ipv6Data::Nd6Info : public ydk::Entity
{
    public:
        Nd6Info();
        ~Nd6Info();

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

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf if_name; //type: string
        ydk::YLeaf ip; //type: string
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf state; //type: Ipv6NdTdlState
        ydk::YLeaf idle_timer; //type: uint32
        ydk::YLeaf uptime; //type: uint32

}; // Ipv6Data::Nd6Info

class Ipv6NdTdlState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv6_nd_incomplete;
        static const ydk::Enum::YLeaf ipv6_nd_reachable;
        static const ydk::Enum::YLeaf ipv6_nd_stale;
        static const ydk::Enum::YLeaf ipv6_nd_glean;
        static const ydk::Enum::YLeaf ipv6_nd_delay;
        static const ydk::Enum::YLeaf ipv6_nd_probe;
        static const ydk::Enum::YLeaf ipv6_nd_delete;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv6-nd-incomplete") return 0;
            if (name == "ipv6-nd-reachable") return 1;
            if (name == "ipv6-nd-stale") return 2;
            if (name == "ipv6-nd-glean") return 3;
            if (name == "ipv6-nd-delay") return 4;
            if (name == "ipv6-nd-probe") return 5;
            if (name == "ipv6-nd-delete") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_IPV6_OPER_ */

