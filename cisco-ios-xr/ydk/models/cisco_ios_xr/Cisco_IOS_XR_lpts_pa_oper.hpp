#ifndef _CISCO_IOS_XR_LPTS_PA_OPER_
#define _CISCO_IOS_XR_LPTS_PA_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pa_oper {

class LptsPa : public ydk::Entity
{
    public:
        LptsPa();
        ~LptsPa();

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

        class EntryXr; //type: LptsPa::EntryXr
        class Entries; //type: LptsPa::Entries

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pa_oper::LptsPa::Entries> entries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pa_oper::LptsPa::EntryXr> entry_xr;
        
}; // LptsPa


class LptsPa::Entries : public ydk::Entity
{
    public:
        Entries();
        ~Entries();

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

        class Entry; //type: LptsPa::Entries::Entry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pa_oper::LptsPa::Entries::Entry> > entry;
        
}; // LptsPa::Entries


class LptsPa::Entries::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

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

        ydk::YLeaf entry; //type: string
        ydk::YLeaf flags; //type: uint32
        ydk::YLeaf open_flags; //type: uint32
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf times; //type: string

}; // LptsPa::Entries::Entry


class LptsPa::EntryXr : public ydk::Entity
{
    public:
        EntryXr();
        ~EntryXr();

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

        class Entry; //type: LptsPa::EntryXr::Entry

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pa_oper::LptsPa::EntryXr::Entry> > entry;
        
}; // LptsPa::EntryXr


class LptsPa::EntryXr::Entry : public ydk::Entity
{
    public:
        Entry();
        ~Entry();

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

        ydk::YLeaf entry; //type: string
        ydk::YLeaf location; //type: uint32
        ydk::YLeaf client_id; //type: uint32
        ydk::YLeaf vid; //type: uint32
        ydk::YLeaf cookie; //type: uint32
        ydk::YLeaf l3protocol; //type: uint32
        ydk::YLeaf l4protocol; //type: uint32
        ydk::YLeaf smask; //type: uint32
        ydk::YLeaf ifs; //type: uint32
        ydk::YLeaf ptype; //type: uint32
        ydk::YLeaf local_ip; //type: string
        ydk::YLeaf remote_ip; //type: string
        ydk::YLeaf local_len; //type: uint8
        ydk::YLeaf remote_len; //type: uint8
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf remote_port; //type: uint16
        ydk::YLeaf packet_misc; //type: uint32
        ydk::YLeaf scope; //type: uint32
        ydk::YLeaf client_flags; //type: uint32
        ydk::YLeaf min_ttl; //type: uint8
        ydk::YLeaf lazy_bindq_delay; //type: uint32
        ydk::YLeaf ptq_delay; //type: uint32
        class Ctime; //type: LptsPa::EntryXr::Entry::Ctime
        class Utime; //type: LptsPa::EntryXr::Entry::Utime

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pa_oper::LptsPa::EntryXr::Entry::Ctime> ctime;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_lpts_pa_oper::LptsPa::EntryXr::Entry::Utime> utime;
        
}; // LptsPa::EntryXr::Entry


class LptsPa::EntryXr::Entry::Ctime : public ydk::Entity
{
    public:
        Ctime();
        ~Ctime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tv_sec; //type: uint32
        ydk::YLeaf tv_nsec; //type: uint32

}; // LptsPa::EntryXr::Entry::Ctime


class LptsPa::EntryXr::Entry::Utime : public ydk::Entity
{
    public:
        Utime();
        ~Utime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tv_sec; //type: uint32
        ydk::YLeaf tv_nsec; //type: uint32

}; // LptsPa::EntryXr::Entry::Utime


}
}

#endif /* _CISCO_IOS_XR_LPTS_PA_OPER_ */

