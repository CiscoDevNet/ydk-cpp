#ifndef _CISCO_IOS_XE_LISP_OPER_
#define _CISCO_IOS_XE_LISP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_lisp_oper {

class LispState : public ydk::Entity
{
    public:
        LispState();
        ~LispState();

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

        class LispRouters; //type: LispState::LispRouters

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters> > lisp_routers;
        
}; // LispState


class LispState::LispRouters : public ydk::Entity
{
    public:
        LispRouters();
        ~LispRouters();

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

        ydk::YLeaf top_id; //type: uint32
        ydk::YLeaf site_id; //type: uint64
        ydk::YLeafList xtr_id; //type: list of  uint8
        class Instances; //type: LispState::LispRouters::Instances

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances> > instances;
        
}; // LispState::LispRouters


class LispState::LispRouters::Instances : public ydk::Entity
{
    public:
        Instances();
        ~Instances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iid; //type: uint32
        class Af; //type: LispState::LispRouters::Instances::Af

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af> > af;
        
}; // LispState::LispRouters::Instances


class LispState::LispRouters::Instances::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iaftype; //type: LispIaftypeType
        class Role; //type: LispState::LispRouters::Instances::Af::Role
        class MapCache; //type: LispState::LispRouters::Instances::Af::MapCache

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::Role> role;
        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapCache> > map_cache;
        
}; // LispState::LispRouters::Instances::Af


class LispState::LispRouters::Instances::Af::Role : public ydk::Entity
{
    public:
        Role();
        ~Role();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_ms; //type: boolean
        ydk::YLeaf is_mr; //type: boolean
        ydk::YLeaf is_itr; //type: boolean
        ydk::YLeaf is_etr; //type: boolean
        ydk::YLeaf is_pitr; //type: boolean
        ydk::YLeaf is_petr; //type: boolean

}; // LispState::LispRouters::Instances::Af::Role


class LispState::LispRouters::Instances::Af::MapCache : public ydk::Entity
{
    public:
        MapCache();
        ~MapCache();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf up_time; //type: string
        ydk::YLeaf last_modified_time; //type: string
        ydk::YLeaf last_update_time; //type: string
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf is_authoritative; //type: boolean
        ydk::YLeaf is_static; //type: boolean
        ydk::YLeaf is_negative; //type: boolean
        ydk::YLeaf nmr_action; //type: LispMapReplyActionType
        class Rloc; //type: LispState::LispRouters::Instances::Af::MapCache::Rloc

        std::vector<std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapCache::Rloc> > rloc;
        
}; // LispState::LispRouters::Instances::Af::MapCache


class LispState::LispRouters::Instances::Af::MapCache::Rloc : public ydk::Entity
{
    public:
        Rloc();
        ~Rloc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: LispAddressFamilyType
        ydk::YLeaf address; //type: string
        class Params; //type: LispState::LispRouters::Instances::Af::MapCache::Rloc::Params

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_lisp_oper::LispState::LispRouters::Instances::Af::MapCache::Rloc::Params> params;
        
}; // LispState::LispRouters::Instances::Af::MapCache::Rloc


class LispState::LispRouters::Instances::Af::MapCache::Rloc::Params : public ydk::Entity
{
    public:
        Params();
        ~Params();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint8
        ydk::YLeaf weight; //type: uint8
        ydk::YLeaf mcast_priority; //type: uint8
        ydk::YLeaf mcast_weight; //type: uint8

}; // LispState::LispRouters::Instances::Af::MapCache::Rloc::Params

class LispAddressFamilyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_afi;
        static const ydk::Enum::YLeaf ipv6_afi;
        static const ydk::Enum::YLeaf mac_afi;

};

class LispIaftypeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf iaf_ipv4;
        static const ydk::Enum::YLeaf iaf_ipv6;
        static const ydk::Enum::YLeaf iaf_mac;
        static const ydk::Enum::YLeaf iaf_ar;
        static const ydk::Enum::YLeaf iaf_rar;

};

class LispMapReplyActionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_action;
        static const ydk::Enum::YLeaf natively_forward;
        static const ydk::Enum::YLeaf send_map_request;
        static const ydk::Enum::YLeaf drop;

};


}
}

#endif /* _CISCO_IOS_XE_LISP_OPER_ */

