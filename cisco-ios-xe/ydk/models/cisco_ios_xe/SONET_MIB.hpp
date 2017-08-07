#ifndef _SONET_MIB_
#define _SONET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace SONET_MIB {

class SonetMib : public ydk::Entity
{
    public:
        SonetMib();
        ~SonetMib();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        class Sonetmedium; //type: SonetMib::Sonetmedium
        class Sonetmediumtable; //type: SonetMib::Sonetmediumtable
        class Sonetsectioncurrenttable; //type: SonetMib::Sonetsectioncurrenttable
        class Sonetsectionintervaltable; //type: SonetMib::Sonetsectionintervaltable
        class Sonetlinecurrenttable; //type: SonetMib::Sonetlinecurrenttable
        class Sonetlineintervaltable; //type: SonetMib::Sonetlineintervaltable
        class Sonetfarendlinecurrenttable; //type: SonetMib::Sonetfarendlinecurrenttable
        class Sonetfarendlineintervaltable; //type: SonetMib::Sonetfarendlineintervaltable
        class Sonetpathcurrenttable; //type: SonetMib::Sonetpathcurrenttable
        class Sonetpathintervaltable; //type: SonetMib::Sonetpathintervaltable
        class Sonetfarendpathcurrenttable; //type: SonetMib::Sonetfarendpathcurrenttable
        class Sonetfarendpathintervaltable; //type: SonetMib::Sonetfarendpathintervaltable
        class Sonetvtcurrenttable; //type: SonetMib::Sonetvtcurrenttable
        class Sonetvtintervaltable; //type: SonetMib::Sonetvtintervaltable
        class Sonetfarendvtcurrenttable; //type: SonetMib::Sonetfarendvtcurrenttable
        class Sonetfarendvtintervaltable; //type: SonetMib::Sonetfarendvtintervaltable

        std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendlinecurrenttable> sonetfarendlinecurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendlineintervaltable> sonetfarendlineintervaltable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendpathcurrenttable> sonetfarendpathcurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendpathintervaltable> sonetfarendpathintervaltable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendvtcurrenttable> sonetfarendvtcurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendvtintervaltable> sonetfarendvtintervaltable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetlinecurrenttable> sonetlinecurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetlineintervaltable> sonetlineintervaltable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetmedium> sonetmedium;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetmediumtable> sonetmediumtable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetpathcurrenttable> sonetpathcurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetpathintervaltable> sonetpathintervaltable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetsectioncurrenttable> sonetsectioncurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetsectionintervaltable> sonetsectionintervaltable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetvtcurrenttable> sonetvtcurrenttable;
        std::shared_ptr<SONET_MIB::SonetMib::Sonetvtintervaltable> sonetvtintervaltable;
        
}; // SonetMib


class SonetMib::Sonetmedium : public ydk::Entity
{
    public:
        Sonetmedium();
        ~Sonetmedium();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sonetsesthresholdset; //type: Sonetsesthresholdset
        class Sonetsesthresholdset;

}; // SonetMib::Sonetmedium


class SonetMib::Sonetmediumtable : public ydk::Entity
{
    public:
        Sonetmediumtable();
        ~Sonetmediumtable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetmediumentry; //type: SonetMib::Sonetmediumtable::Sonetmediumentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetmediumtable::Sonetmediumentry> > sonetmediumentry;
        
}; // SonetMib::Sonetmediumtable


class SonetMib::Sonetmediumtable::Sonetmediumentry : public ydk::Entity
{
    public:
        Sonetmediumentry();
        ~Sonetmediumentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetmediumtype; //type: Sonetmediumtype
        ydk::YLeaf sonetmediumtimeelapsed; //type: int32
        ydk::YLeaf sonetmediumvalidintervals; //type: int32
        ydk::YLeaf sonetmediumlinecoding; //type: Sonetmediumlinecoding
        ydk::YLeaf sonetmediumlinetype; //type: Sonetmediumlinetype
        ydk::YLeaf sonetmediumcircuitidentifier; //type: string
        ydk::YLeaf sonetmediuminvalidintervals; //type: int32
        ydk::YLeaf sonetmediumloopbackconfig; //type: Sonetmediumloopbackconfig
        class Sonetmediumtype;
        class Sonetmediumlinecoding;
        class Sonetmediumlinetype;

}; // SonetMib::Sonetmediumtable::Sonetmediumentry


class SonetMib::Sonetsectioncurrenttable : public ydk::Entity
{
    public:
        Sonetsectioncurrenttable();
        ~Sonetsectioncurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetsectioncurrententry; //type: SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry> > sonetsectioncurrententry;
        
}; // SonetMib::Sonetsectioncurrenttable


class SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry : public ydk::Entity
{
    public:
        Sonetsectioncurrententry();
        ~Sonetsectioncurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetsectioncurrentstatus; //type: int32
        ydk::YLeaf sonetsectioncurrentess; //type: uint32
        ydk::YLeaf sonetsectioncurrentsess; //type: uint32
        ydk::YLeaf sonetsectioncurrentsefss; //type: uint32
        ydk::YLeaf sonetsectioncurrentcvs; //type: uint32

}; // SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry


class SonetMib::Sonetsectionintervaltable : public ydk::Entity
{
    public:
        Sonetsectionintervaltable();
        ~Sonetsectionintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetsectionintervalentry; //type: SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry> > sonetsectionintervalentry;
        
}; // SonetMib::Sonetsectionintervaltable


class SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry : public ydk::Entity
{
    public:
        Sonetsectionintervalentry();
        ~Sonetsectionintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetsectionintervalnumber; //type: int32
        ydk::YLeaf sonetsectionintervaless; //type: uint32
        ydk::YLeaf sonetsectionintervalsess; //type: uint32
        ydk::YLeaf sonetsectionintervalsefss; //type: uint32
        ydk::YLeaf sonetsectionintervalcvs; //type: uint32
        ydk::YLeaf sonetsectionintervalvaliddata; //type: boolean

}; // SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry


class SonetMib::Sonetlinecurrenttable : public ydk::Entity
{
    public:
        Sonetlinecurrenttable();
        ~Sonetlinecurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetlinecurrententry; //type: SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry> > sonetlinecurrententry;
        
}; // SonetMib::Sonetlinecurrenttable


class SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry : public ydk::Entity
{
    public:
        Sonetlinecurrententry();
        ~Sonetlinecurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetlinecurrentstatus; //type: int32
        ydk::YLeaf sonetlinecurrentess; //type: uint32
        ydk::YLeaf sonetlinecurrentsess; //type: uint32
        ydk::YLeaf sonetlinecurrentcvs; //type: uint32
        ydk::YLeaf sonetlinecurrentuass; //type: uint32

}; // SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry


class SonetMib::Sonetlineintervaltable : public ydk::Entity
{
    public:
        Sonetlineintervaltable();
        ~Sonetlineintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetlineintervalentry; //type: SonetMib::Sonetlineintervaltable::Sonetlineintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetlineintervaltable::Sonetlineintervalentry> > sonetlineintervalentry;
        
}; // SonetMib::Sonetlineintervaltable


class SonetMib::Sonetlineintervaltable::Sonetlineintervalentry : public ydk::Entity
{
    public:
        Sonetlineintervalentry();
        ~Sonetlineintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetlineintervalnumber; //type: int32
        ydk::YLeaf sonetlineintervaless; //type: uint32
        ydk::YLeaf sonetlineintervalsess; //type: uint32
        ydk::YLeaf sonetlineintervalcvs; //type: uint32
        ydk::YLeaf sonetlineintervaluass; //type: uint32
        ydk::YLeaf sonetlineintervalvaliddata; //type: boolean

}; // SonetMib::Sonetlineintervaltable::Sonetlineintervalentry


class SonetMib::Sonetfarendlinecurrenttable : public ydk::Entity
{
    public:
        Sonetfarendlinecurrenttable();
        ~Sonetfarendlinecurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetfarendlinecurrententry; //type: SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry> > sonetfarendlinecurrententry;
        
}; // SonetMib::Sonetfarendlinecurrenttable


class SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry : public ydk::Entity
{
    public:
        Sonetfarendlinecurrententry();
        ~Sonetfarendlinecurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendlinecurrentess; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentsess; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendlinecurrentuass; //type: uint32

}; // SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry


class SonetMib::Sonetfarendlineintervaltable : public ydk::Entity
{
    public:
        Sonetfarendlineintervaltable();
        ~Sonetfarendlineintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetfarendlineintervalentry; //type: SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry> > sonetfarendlineintervalentry;
        
}; // SonetMib::Sonetfarendlineintervaltable


class SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry : public ydk::Entity
{
    public:
        Sonetfarendlineintervalentry();
        ~Sonetfarendlineintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendlineintervalnumber; //type: int32
        ydk::YLeaf sonetfarendlineintervaless; //type: uint32
        ydk::YLeaf sonetfarendlineintervalsess; //type: uint32
        ydk::YLeaf sonetfarendlineintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendlineintervaluass; //type: uint32
        ydk::YLeaf sonetfarendlineintervalvaliddata; //type: boolean

}; // SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry


class SonetMib::Sonetpathcurrenttable : public ydk::Entity
{
    public:
        Sonetpathcurrenttable();
        ~Sonetpathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetpathcurrententry; //type: SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry> > sonetpathcurrententry;
        
}; // SonetMib::Sonetpathcurrenttable


class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry : public ydk::Entity
{
    public:
        Sonetpathcurrententry();
        ~Sonetpathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetpathcurrentwidth; //type: Sonetpathcurrentwidth
        ydk::YLeaf sonetpathcurrentstatus; //type: int32
        ydk::YLeaf sonetpathcurrentess; //type: uint32
        ydk::YLeaf sonetpathcurrentsess; //type: uint32
        ydk::YLeaf sonetpathcurrentcvs; //type: uint32
        ydk::YLeaf sonetpathcurrentuass; //type: uint32
        ydk::YLeaf cspsonetpathpayload; //type: Cspsonetpathpayload
        ydk::YLeaf csptributarymappingtype; //type: Csptributarymappingtype
        ydk::YLeaf cspsignallingtransportmode; //type: Cspsignallingtransportmode
        ydk::YLeaf csptributarygroupingtype; //type: Csptributarygroupingtype
        class Sonetpathcurrentwidth;
        class Cspsonetpathpayload;
        class Csptributarymappingtype;
        class Cspsignallingtransportmode;
        class Csptributarygroupingtype;

}; // SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry


class SonetMib::Sonetpathintervaltable : public ydk::Entity
{
    public:
        Sonetpathintervaltable();
        ~Sonetpathintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetpathintervalentry; //type: SonetMib::Sonetpathintervaltable::Sonetpathintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetpathintervaltable::Sonetpathintervalentry> > sonetpathintervalentry;
        
}; // SonetMib::Sonetpathintervaltable


class SonetMib::Sonetpathintervaltable::Sonetpathintervalentry : public ydk::Entity
{
    public:
        Sonetpathintervalentry();
        ~Sonetpathintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetpathintervalnumber; //type: int32
        ydk::YLeaf sonetpathintervaless; //type: uint32
        ydk::YLeaf sonetpathintervalsess; //type: uint32
        ydk::YLeaf sonetpathintervalcvs; //type: uint32
        ydk::YLeaf sonetpathintervaluass; //type: uint32
        ydk::YLeaf sonetpathintervalvaliddata; //type: boolean

}; // SonetMib::Sonetpathintervaltable::Sonetpathintervalentry


class SonetMib::Sonetfarendpathcurrenttable : public ydk::Entity
{
    public:
        Sonetfarendpathcurrenttable();
        ~Sonetfarendpathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetfarendpathcurrententry; //type: SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry> > sonetfarendpathcurrententry;
        
}; // SonetMib::Sonetfarendpathcurrenttable


class SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry : public ydk::Entity
{
    public:
        Sonetfarendpathcurrententry();
        ~Sonetfarendpathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendpathcurrentess; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentsess; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendpathcurrentuass; //type: uint32

}; // SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry


class SonetMib::Sonetfarendpathintervaltable : public ydk::Entity
{
    public:
        Sonetfarendpathintervaltable();
        ~Sonetfarendpathintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetfarendpathintervalentry; //type: SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry> > sonetfarendpathintervalentry;
        
}; // SonetMib::Sonetfarendpathintervaltable


class SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry : public ydk::Entity
{
    public:
        Sonetfarendpathintervalentry();
        ~Sonetfarendpathintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendpathintervalnumber; //type: int32
        ydk::YLeaf sonetfarendpathintervaless; //type: uint32
        ydk::YLeaf sonetfarendpathintervalsess; //type: uint32
        ydk::YLeaf sonetfarendpathintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendpathintervaluass; //type: uint32
        ydk::YLeaf sonetfarendpathintervalvaliddata; //type: boolean

}; // SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry


class SonetMib::Sonetvtcurrenttable : public ydk::Entity
{
    public:
        Sonetvtcurrenttable();
        ~Sonetvtcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetvtcurrententry; //type: SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry> > sonetvtcurrententry;
        
}; // SonetMib::Sonetvtcurrenttable


class SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry : public ydk::Entity
{
    public:
        Sonetvtcurrententry();
        ~Sonetvtcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetvtcurrentwidth; //type: Sonetvtcurrentwidth
        ydk::YLeaf sonetvtcurrentstatus; //type: int32
        ydk::YLeaf sonetvtcurrentess; //type: uint32
        ydk::YLeaf sonetvtcurrentsess; //type: uint32
        ydk::YLeaf sonetvtcurrentcvs; //type: uint32
        ydk::YLeaf sonetvtcurrentuass; //type: uint32
        class Sonetvtcurrentwidth;

}; // SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry


class SonetMib::Sonetvtintervaltable : public ydk::Entity
{
    public:
        Sonetvtintervaltable();
        ~Sonetvtintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetvtintervalentry; //type: SonetMib::Sonetvtintervaltable::Sonetvtintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetvtintervaltable::Sonetvtintervalentry> > sonetvtintervalentry;
        
}; // SonetMib::Sonetvtintervaltable


class SonetMib::Sonetvtintervaltable::Sonetvtintervalentry : public ydk::Entity
{
    public:
        Sonetvtintervalentry();
        ~Sonetvtintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetvtintervalnumber; //type: int32
        ydk::YLeaf sonetvtintervaless; //type: uint32
        ydk::YLeaf sonetvtintervalsess; //type: uint32
        ydk::YLeaf sonetvtintervalcvs; //type: uint32
        ydk::YLeaf sonetvtintervaluass; //type: uint32
        ydk::YLeaf sonetvtintervalvaliddata; //type: boolean

}; // SonetMib::Sonetvtintervaltable::Sonetvtintervalentry


class SonetMib::Sonetfarendvtcurrenttable : public ydk::Entity
{
    public:
        Sonetfarendvtcurrenttable();
        ~Sonetfarendvtcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetfarendvtcurrententry; //type: SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry> > sonetfarendvtcurrententry;
        
}; // SonetMib::Sonetfarendvtcurrenttable


class SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry : public ydk::Entity
{
    public:
        Sonetfarendvtcurrententry();
        ~Sonetfarendvtcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendvtcurrentess; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentsess; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentcvs; //type: uint32
        ydk::YLeaf sonetfarendvtcurrentuass; //type: uint32

}; // SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry


class SonetMib::Sonetfarendvtintervaltable : public ydk::Entity
{
    public:
        Sonetfarendvtintervaltable();
        ~Sonetfarendvtintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sonetfarendvtintervalentry; //type: SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry> > sonetfarendvtintervalentry;
        
}; // SonetMib::Sonetfarendvtintervaltable


class SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry : public ydk::Entity
{
    public:
        Sonetfarendvtintervalentry();
        ~Sonetfarendvtintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf sonetfarendvtintervalnumber; //type: int32
        ydk::YLeaf sonetfarendvtintervaless; //type: uint32
        ydk::YLeaf sonetfarendvtintervalsess; //type: uint32
        ydk::YLeaf sonetfarendvtintervalcvs; //type: uint32
        ydk::YLeaf sonetfarendvtintervaluass; //type: uint32
        ydk::YLeaf sonetfarendvtintervalvaliddata; //type: boolean

}; // SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry

class SonetMib::Sonetmedium::Sonetsesthresholdset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf bellcore1991;
        static const ydk::Enum::YLeaf ansi1993;
        static const ydk::Enum::YLeaf itu1995;
        static const ydk::Enum::YLeaf ansi1997;

};

class SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonet;
        static const ydk::Enum::YLeaf sdh;

};

class SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinecoding : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetMediumOther;
        static const ydk::Enum::YLeaf sonetMediumB3ZS;
        static const ydk::Enum::YLeaf sonetMediumCMI;
        static const ydk::Enum::YLeaf sonetMediumNRZ;
        static const ydk::Enum::YLeaf sonetMediumRZ;

};

class SonetMib::Sonetmediumtable::Sonetmediumentry::Sonetmediumlinetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sonetOther;
        static const ydk::Enum::YLeaf sonetShortSingleMode;
        static const ydk::Enum::YLeaf sonetLongSingleMode;
        static const ydk::Enum::YLeaf sonetMultiMode;
        static const ydk::Enum::YLeaf sonetCoax;
        static const ydk::Enum::YLeaf sonetUTP;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Sonetpathcurrentwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf sts1;
        static const ydk::Enum::YLeaf sts3cSTM1;
        static const ydk::Enum::YLeaf sts12cSTM4;
        static const ydk::Enum::YLeaf sts24c;
        static const ydk::Enum::YLeaf sts48cSTM16;
        static const ydk::Enum::YLeaf sts192cSTM64;
        static const ydk::Enum::YLeaf sts768cSTM256;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsonetpathpayload : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unequipped;
        static const ydk::Enum::YLeaf unspecified;
        static const ydk::Enum::YLeaf ds3;
        static const ydk::Enum::YLeaf vt15vc11;
        static const ydk::Enum::YLeaf vt2vc12;
        static const ydk::Enum::YLeaf atmCell;
        static const ydk::Enum::YLeaf hdlcFr;
        static const ydk::Enum::YLeaf e3;
        static const ydk::Enum::YLeaf vtStructured;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarymappingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf asynchronous;
        static const ydk::Enum::YLeaf byteSynchronous;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Cspsignallingtransportmode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf signallingTransferMode;
        static const ydk::Enum::YLeaf clearMode;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::Csptributarygroupingtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf au3Grouping;
        static const ydk::Enum::YLeaf au4Grouping;

};

class SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::Sonetvtcurrentwidth : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vtWidth15VC11;
        static const ydk::Enum::YLeaf vtWidth2VC12;
        static const ydk::Enum::YLeaf vtWidth3;
        static const ydk::Enum::YLeaf vtWidth6VC2;
        static const ydk::Enum::YLeaf vtWidth6c;

};


}
}

#endif /* _SONET_MIB_ */

