#ifndef _SONET_MIB_
#define _SONET_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace SONET_MIB {

class SonetMib : public Entity
{
    public:
        SonetMib();
        ~SonetMib();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

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


class SonetMib::Sonetmedium : public Entity
{
    public:
        Sonetmedium();
        ~Sonetmedium();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sonetsesthresholdset; //type: SonetsesthresholdsetEnum
        class SonetsesthresholdsetEnum;

}; // SonetMib::Sonetmedium


class SonetMib::Sonetmediumtable : public Entity
{
    public:
        Sonetmediumtable();
        ~Sonetmediumtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetmediumentry; //type: SonetMib::Sonetmediumtable::Sonetmediumentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetmediumtable::Sonetmediumentry> > sonetmediumentry;
        
}; // SonetMib::Sonetmediumtable


class SonetMib::Sonetmediumtable::Sonetmediumentry : public Entity
{
    public:
        Sonetmediumentry();
        ~Sonetmediumentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetmediumtype; //type: SonetmediumtypeEnum
        YLeaf sonetmediumtimeelapsed; //type: int32
        YLeaf sonetmediumvalidintervals; //type: int32
        YLeaf sonetmediumlinecoding; //type: SonetmediumlinecodingEnum
        YLeaf sonetmediumlinetype; //type: SonetmediumlinetypeEnum
        YLeaf sonetmediumcircuitidentifier; //type: string
        YLeaf sonetmediuminvalidintervals; //type: int32
        YLeaf sonetmediumloopbackconfig; //type: Sonetmediumloopbackconfig
        class SonetmediumtypeEnum;
        class SonetmediumlinecodingEnum;
        class SonetmediumlinetypeEnum;

}; // SonetMib::Sonetmediumtable::Sonetmediumentry


class SonetMib::Sonetsectioncurrenttable : public Entity
{
    public:
        Sonetsectioncurrenttable();
        ~Sonetsectioncurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetsectioncurrententry; //type: SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry> > sonetsectioncurrententry;
        
}; // SonetMib::Sonetsectioncurrenttable


class SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry : public Entity
{
    public:
        Sonetsectioncurrententry();
        ~Sonetsectioncurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetsectioncurrentstatus; //type: int32
        YLeaf sonetsectioncurrentess; //type: uint32
        YLeaf sonetsectioncurrentsess; //type: uint32
        YLeaf sonetsectioncurrentsefss; //type: uint32
        YLeaf sonetsectioncurrentcvs; //type: uint32

}; // SonetMib::Sonetsectioncurrenttable::Sonetsectioncurrententry


class SonetMib::Sonetsectionintervaltable : public Entity
{
    public:
        Sonetsectionintervaltable();
        ~Sonetsectionintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetsectionintervalentry; //type: SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry> > sonetsectionintervalentry;
        
}; // SonetMib::Sonetsectionintervaltable


class SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry : public Entity
{
    public:
        Sonetsectionintervalentry();
        ~Sonetsectionintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetsectionintervalnumber; //type: int32
        YLeaf sonetsectionintervaless; //type: uint32
        YLeaf sonetsectionintervalsess; //type: uint32
        YLeaf sonetsectionintervalsefss; //type: uint32
        YLeaf sonetsectionintervalcvs; //type: uint32
        YLeaf sonetsectionintervalvaliddata; //type: boolean

}; // SonetMib::Sonetsectionintervaltable::Sonetsectionintervalentry


class SonetMib::Sonetlinecurrenttable : public Entity
{
    public:
        Sonetlinecurrenttable();
        ~Sonetlinecurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetlinecurrententry; //type: SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry> > sonetlinecurrententry;
        
}; // SonetMib::Sonetlinecurrenttable


class SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry : public Entity
{
    public:
        Sonetlinecurrententry();
        ~Sonetlinecurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetlinecurrentstatus; //type: int32
        YLeaf sonetlinecurrentess; //type: uint32
        YLeaf sonetlinecurrentsess; //type: uint32
        YLeaf sonetlinecurrentcvs; //type: uint32
        YLeaf sonetlinecurrentuass; //type: uint32

}; // SonetMib::Sonetlinecurrenttable::Sonetlinecurrententry


class SonetMib::Sonetlineintervaltable : public Entity
{
    public:
        Sonetlineintervaltable();
        ~Sonetlineintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetlineintervalentry; //type: SonetMib::Sonetlineintervaltable::Sonetlineintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetlineintervaltable::Sonetlineintervalentry> > sonetlineintervalentry;
        
}; // SonetMib::Sonetlineintervaltable


class SonetMib::Sonetlineintervaltable::Sonetlineintervalentry : public Entity
{
    public:
        Sonetlineintervalentry();
        ~Sonetlineintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetlineintervalnumber; //type: int32
        YLeaf sonetlineintervaless; //type: uint32
        YLeaf sonetlineintervalsess; //type: uint32
        YLeaf sonetlineintervalcvs; //type: uint32
        YLeaf sonetlineintervaluass; //type: uint32
        YLeaf sonetlineintervalvaliddata; //type: boolean

}; // SonetMib::Sonetlineintervaltable::Sonetlineintervalentry


class SonetMib::Sonetfarendlinecurrenttable : public Entity
{
    public:
        Sonetfarendlinecurrenttable();
        ~Sonetfarendlinecurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetfarendlinecurrententry; //type: SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry> > sonetfarendlinecurrententry;
        
}; // SonetMib::Sonetfarendlinecurrenttable


class SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry : public Entity
{
    public:
        Sonetfarendlinecurrententry();
        ~Sonetfarendlinecurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetfarendlinecurrentess; //type: uint32
        YLeaf sonetfarendlinecurrentsess; //type: uint32
        YLeaf sonetfarendlinecurrentcvs; //type: uint32
        YLeaf sonetfarendlinecurrentuass; //type: uint32

}; // SonetMib::Sonetfarendlinecurrenttable::Sonetfarendlinecurrententry


class SonetMib::Sonetfarendlineintervaltable : public Entity
{
    public:
        Sonetfarendlineintervaltable();
        ~Sonetfarendlineintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetfarendlineintervalentry; //type: SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry> > sonetfarendlineintervalentry;
        
}; // SonetMib::Sonetfarendlineintervaltable


class SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry : public Entity
{
    public:
        Sonetfarendlineintervalentry();
        ~Sonetfarendlineintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetfarendlineintervalnumber; //type: int32
        YLeaf sonetfarendlineintervaless; //type: uint32
        YLeaf sonetfarendlineintervalsess; //type: uint32
        YLeaf sonetfarendlineintervalcvs; //type: uint32
        YLeaf sonetfarendlineintervaluass; //type: uint32
        YLeaf sonetfarendlineintervalvaliddata; //type: boolean

}; // SonetMib::Sonetfarendlineintervaltable::Sonetfarendlineintervalentry


class SonetMib::Sonetpathcurrenttable : public Entity
{
    public:
        Sonetpathcurrenttable();
        ~Sonetpathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetpathcurrententry; //type: SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry> > sonetpathcurrententry;
        
}; // SonetMib::Sonetpathcurrenttable


class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry : public Entity
{
    public:
        Sonetpathcurrententry();
        ~Sonetpathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetpathcurrentwidth; //type: SonetpathcurrentwidthEnum
        YLeaf sonetpathcurrentstatus; //type: int32
        YLeaf sonetpathcurrentess; //type: uint32
        YLeaf sonetpathcurrentsess; //type: uint32
        YLeaf sonetpathcurrentcvs; //type: uint32
        YLeaf sonetpathcurrentuass; //type: uint32
        YLeaf cspsonetpathpayload; //type: CspsonetpathpayloadEnum
        YLeaf csptributarymappingtype; //type: CsptributarymappingtypeEnum
        YLeaf cspsignallingtransportmode; //type: CspsignallingtransportmodeEnum
        YLeaf csptributarygroupingtype; //type: CsptributarygroupingtypeEnum
        class SonetpathcurrentwidthEnum;
        class CspsonetpathpayloadEnum;
        class CsptributarymappingtypeEnum;
        class CspsignallingtransportmodeEnum;
        class CsptributarygroupingtypeEnum;

}; // SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry


class SonetMib::Sonetpathintervaltable : public Entity
{
    public:
        Sonetpathintervaltable();
        ~Sonetpathintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetpathintervalentry; //type: SonetMib::Sonetpathintervaltable::Sonetpathintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetpathintervaltable::Sonetpathintervalentry> > sonetpathintervalentry;
        
}; // SonetMib::Sonetpathintervaltable


class SonetMib::Sonetpathintervaltable::Sonetpathintervalentry : public Entity
{
    public:
        Sonetpathintervalentry();
        ~Sonetpathintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetpathintervalnumber; //type: int32
        YLeaf sonetpathintervaless; //type: uint32
        YLeaf sonetpathintervalsess; //type: uint32
        YLeaf sonetpathintervalcvs; //type: uint32
        YLeaf sonetpathintervaluass; //type: uint32
        YLeaf sonetpathintervalvaliddata; //type: boolean

}; // SonetMib::Sonetpathintervaltable::Sonetpathintervalentry


class SonetMib::Sonetfarendpathcurrenttable : public Entity
{
    public:
        Sonetfarendpathcurrenttable();
        ~Sonetfarendpathcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetfarendpathcurrententry; //type: SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry> > sonetfarendpathcurrententry;
        
}; // SonetMib::Sonetfarendpathcurrenttable


class SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry : public Entity
{
    public:
        Sonetfarendpathcurrententry();
        ~Sonetfarendpathcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetfarendpathcurrentess; //type: uint32
        YLeaf sonetfarendpathcurrentsess; //type: uint32
        YLeaf sonetfarendpathcurrentcvs; //type: uint32
        YLeaf sonetfarendpathcurrentuass; //type: uint32

}; // SonetMib::Sonetfarendpathcurrenttable::Sonetfarendpathcurrententry


class SonetMib::Sonetfarendpathintervaltable : public Entity
{
    public:
        Sonetfarendpathintervaltable();
        ~Sonetfarendpathintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetfarendpathintervalentry; //type: SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry> > sonetfarendpathintervalentry;
        
}; // SonetMib::Sonetfarendpathintervaltable


class SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry : public Entity
{
    public:
        Sonetfarendpathintervalentry();
        ~Sonetfarendpathintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetfarendpathintervalnumber; //type: int32
        YLeaf sonetfarendpathintervaless; //type: uint32
        YLeaf sonetfarendpathintervalsess; //type: uint32
        YLeaf sonetfarendpathintervalcvs; //type: uint32
        YLeaf sonetfarendpathintervaluass; //type: uint32
        YLeaf sonetfarendpathintervalvaliddata; //type: boolean

}; // SonetMib::Sonetfarendpathintervaltable::Sonetfarendpathintervalentry


class SonetMib::Sonetvtcurrenttable : public Entity
{
    public:
        Sonetvtcurrenttable();
        ~Sonetvtcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetvtcurrententry; //type: SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry> > sonetvtcurrententry;
        
}; // SonetMib::Sonetvtcurrenttable


class SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry : public Entity
{
    public:
        Sonetvtcurrententry();
        ~Sonetvtcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetvtcurrentwidth; //type: SonetvtcurrentwidthEnum
        YLeaf sonetvtcurrentstatus; //type: int32
        YLeaf sonetvtcurrentess; //type: uint32
        YLeaf sonetvtcurrentsess; //type: uint32
        YLeaf sonetvtcurrentcvs; //type: uint32
        YLeaf sonetvtcurrentuass; //type: uint32
        class SonetvtcurrentwidthEnum;

}; // SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry


class SonetMib::Sonetvtintervaltable : public Entity
{
    public:
        Sonetvtintervaltable();
        ~Sonetvtintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetvtintervalentry; //type: SonetMib::Sonetvtintervaltable::Sonetvtintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetvtintervaltable::Sonetvtintervalentry> > sonetvtintervalentry;
        
}; // SonetMib::Sonetvtintervaltable


class SonetMib::Sonetvtintervaltable::Sonetvtintervalentry : public Entity
{
    public:
        Sonetvtintervalentry();
        ~Sonetvtintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetvtintervalnumber; //type: int32
        YLeaf sonetvtintervaless; //type: uint32
        YLeaf sonetvtintervalsess; //type: uint32
        YLeaf sonetvtintervalcvs; //type: uint32
        YLeaf sonetvtintervaluass; //type: uint32
        YLeaf sonetvtintervalvaliddata; //type: boolean

}; // SonetMib::Sonetvtintervaltable::Sonetvtintervalentry


class SonetMib::Sonetfarendvtcurrenttable : public Entity
{
    public:
        Sonetfarendvtcurrenttable();
        ~Sonetfarendvtcurrenttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetfarendvtcurrententry; //type: SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry> > sonetfarendvtcurrententry;
        
}; // SonetMib::Sonetfarendvtcurrenttable


class SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry : public Entity
{
    public:
        Sonetfarendvtcurrententry();
        ~Sonetfarendvtcurrententry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetfarendvtcurrentess; //type: uint32
        YLeaf sonetfarendvtcurrentsess; //type: uint32
        YLeaf sonetfarendvtcurrentcvs; //type: uint32
        YLeaf sonetfarendvtcurrentuass; //type: uint32

}; // SonetMib::Sonetfarendvtcurrenttable::Sonetfarendvtcurrententry


class SonetMib::Sonetfarendvtintervaltable : public Entity
{
    public:
        Sonetfarendvtintervaltable();
        ~Sonetfarendvtintervaltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sonetfarendvtintervalentry; //type: SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry

        std::vector<std::shared_ptr<SONET_MIB::SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry> > sonetfarendvtintervalentry;
        
}; // SonetMib::Sonetfarendvtintervaltable


class SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry : public Entity
{
    public:
        Sonetfarendvtintervalentry();
        ~Sonetfarendvtintervalentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf sonetfarendvtintervalnumber; //type: int32
        YLeaf sonetfarendvtintervaless; //type: uint32
        YLeaf sonetfarendvtintervalsess; //type: uint32
        YLeaf sonetfarendvtintervalcvs; //type: uint32
        YLeaf sonetfarendvtintervaluass; //type: uint32
        YLeaf sonetfarendvtintervalvaliddata; //type: boolean

}; // SonetMib::Sonetfarendvtintervaltable::Sonetfarendvtintervalentry

class SonetMib::Sonetmedium::SonetsesthresholdsetEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf bellcore1991;
        static const Enum::YLeaf ansi1993;
        static const Enum::YLeaf itu1995;
        static const Enum::YLeaf ansi1997;

};

class SonetMib::Sonetmediumtable::Sonetmediumentry::SonetmediumtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf sonet;
        static const Enum::YLeaf sdh;

};

class SonetMib::Sonetmediumtable::Sonetmediumentry::SonetmediumlinecodingEnum : public Enum
{
    public:
        static const Enum::YLeaf sonetMediumOther;
        static const Enum::YLeaf sonetMediumB3ZS;
        static const Enum::YLeaf sonetMediumCMI;
        static const Enum::YLeaf sonetMediumNRZ;
        static const Enum::YLeaf sonetMediumRZ;

};

class SonetMib::Sonetmediumtable::Sonetmediumentry::SonetmediumlinetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf sonetOther;
        static const Enum::YLeaf sonetShortSingleMode;
        static const Enum::YLeaf sonetLongSingleMode;
        static const Enum::YLeaf sonetMultiMode;
        static const Enum::YLeaf sonetCoax;
        static const Enum::YLeaf sonetUTP;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::SonetpathcurrentwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf sts1;
        static const Enum::YLeaf sts3cSTM1;
        static const Enum::YLeaf sts12cSTM4;
        static const Enum::YLeaf sts24c;
        static const Enum::YLeaf sts48cSTM16;
        static const Enum::YLeaf sts192cSTM64;
        static const Enum::YLeaf sts768cSTM256;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::CspsonetpathpayloadEnum : public Enum
{
    public:
        static const Enum::YLeaf unequipped;
        static const Enum::YLeaf unspecified;
        static const Enum::YLeaf ds3;
        static const Enum::YLeaf vt15vc11;
        static const Enum::YLeaf vt2vc12;
        static const Enum::YLeaf atmCell;
        static const Enum::YLeaf hdlcFr;
        static const Enum::YLeaf e3;
        static const Enum::YLeaf vtStructured;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::CsptributarymappingtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf asynchronous;
        static const Enum::YLeaf byteSynchronous;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::CspsignallingtransportmodeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf signallingTransferMode;
        static const Enum::YLeaf clearMode;

};

class SonetMib::Sonetpathcurrenttable::Sonetpathcurrententry::CsptributarygroupingtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf au3Grouping;
        static const Enum::YLeaf au4Grouping;

};

class SonetMib::Sonetvtcurrenttable::Sonetvtcurrententry::SonetvtcurrentwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf vtWidth15VC11;
        static const Enum::YLeaf vtWidth2VC12;
        static const Enum::YLeaf vtWidth3;
        static const Enum::YLeaf vtWidth6VC2;
        static const Enum::YLeaf vtWidth6c;

};


}
}

#endif /* _SONET_MIB_ */

