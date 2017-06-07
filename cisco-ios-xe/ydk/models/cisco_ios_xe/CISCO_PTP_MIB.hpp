#ifndef _CISCO_PTP_MIB_
#define _CISCO_PTP_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace CISCO_PTP_MIB {

class CiscoPtpMib : public Entity
{
    public:
        CiscoPtpMib();
        ~CiscoPtpMib();

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

        class Ciscoptpmibsysteminfo; //type: CiscoPtpMib::Ciscoptpmibsysteminfo
        class Cptpsystemtable; //type: CiscoPtpMib::Cptpsystemtable
        class Cptpsystemdomaintable; //type: CiscoPtpMib::Cptpsystemdomaintable
        class Cptpclocknodetable; //type: CiscoPtpMib::Cptpclocknodetable
        class Cptpclockcurrentdstable; //type: CiscoPtpMib::Cptpclockcurrentdstable
        class Cptpclockparentdstable; //type: CiscoPtpMib::Cptpclockparentdstable
        class Cptpclockdefaultdstable; //type: CiscoPtpMib::Cptpclockdefaultdstable
        class Cptpclockrunningtable; //type: CiscoPtpMib::Cptpclockrunningtable
        class Cptpclocktimepropertiesdstable; //type: CiscoPtpMib::Cptpclocktimepropertiesdstable
        class Cptpclocktransdefaultdstable; //type: CiscoPtpMib::Cptpclocktransdefaultdstable
        class Cptpclockporttable; //type: CiscoPtpMib::Cptpclockporttable
        class Cptpclockportdstable; //type: CiscoPtpMib::Cptpclockportdstable
        class Cptpclockportrunningtable; //type: CiscoPtpMib::Cptpclockportrunningtable
        class Cptpclockporttransdstable; //type: CiscoPtpMib::Cptpclockporttransdstable
        class Cptpclockportassociatetable; //type: CiscoPtpMib::Cptpclockportassociatetable

        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Ciscoptpmibsysteminfo> ciscoptpmibsysteminfo;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockcurrentdstable> cptpclockcurrentdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockdefaultdstable> cptpclockdefaultdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocknodetable> cptpclocknodetable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockparentdstable> cptpclockparentdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportassociatetable> cptpclockportassociatetable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportdstable> cptpclockportdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportrunningtable> cptpclockportrunningtable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttable> cptpclockporttable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttransdstable> cptpclockporttransdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockrunningtable> cptpclockrunningtable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktimepropertiesdstable> cptpclocktimepropertiesdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktransdefaultdstable> cptpclocktransdefaultdstable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemdomaintable> cptpsystemdomaintable;
        std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemtable> cptpsystemtable;
        
}; // CiscoPtpMib


class CiscoPtpMib::Ciscoptpmibsysteminfo : public Entity
{
    public:
        Ciscoptpmibsysteminfo();
        ~Ciscoptpmibsysteminfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpsystemprofile; //type: ClockprofiletypeEnum

}; // CiscoPtpMib::Ciscoptpmibsysteminfo


class CiscoPtpMib::Cptpsystemtable : public Entity
{
    public:
        Cptpsystemtable();
        ~Cptpsystemtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpsystementry; //type: CiscoPtpMib::Cptpsystemtable::Cptpsystementry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemtable::Cptpsystementry> > cptpsystementry;
        
}; // CiscoPtpMib::Cptpsystemtable


class CiscoPtpMib::Cptpsystemtable::Cptpsystementry : public Entity
{
    public:
        Cptpsystementry();
        ~Cptpsystementry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpdomainindex; //type: uint32
        YLeaf cptpinstanceindex; //type: uint32
        YLeaf cptpdomainclockportstotal; //type: uint32
        YLeaf cptpdomainclockportphysicalinterfacestotal; //type: uint32

}; // CiscoPtpMib::Cptpsystemtable::Cptpsystementry


class CiscoPtpMib::Cptpsystemdomaintable : public Entity
{
    public:
        Cptpsystemdomaintable();
        ~Cptpsystemdomaintable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpsystemdomainentry; //type: CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry> > cptpsystemdomainentry;
        
}; // CiscoPtpMib::Cptpsystemdomaintable


class CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry : public Entity
{
    public:
        Cptpsystemdomainentry();
        ~Cptpsystemdomainentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpsystemdomainclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpsystemdomaintotals; //type: uint32

}; // CiscoPtpMib::Cptpsystemdomaintable::Cptpsystemdomainentry


class CiscoPtpMib::Cptpclocknodetable : public Entity
{
    public:
        Cptpclocknodetable();
        ~Cptpclocknodetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclocknodeentry; //type: CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry> > cptpclocknodeentry;
        
}; // CiscoPtpMib::Cptpclocknodetable


class CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry : public Entity
{
    public:
        Cptpclocknodeentry();
        ~Cptpclocknodeentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockdomainindex; //type: uint32
        YLeaf cptpclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockinstanceindex; //type: uint32
        YLeaf cptpclockinput1ppsenabled; //type: boolean
        YLeaf cptpclockinputfrequencyenabled; //type: boolean
        YLeaf cptpclocktodenabled; //type: boolean
        YLeaf cptpclockoutput1ppsenabled; //type: boolean
        YLeaf cptpclockoutput1ppsoffsetenabled; //type: boolean
        YLeaf cptpclockoutput1ppsoffsetvalue; //type: uint32
        YLeaf cptpclockoutput1ppsoffsetnegative; //type: boolean
        YLeaf cptpclockinput1ppsinterface; //type: string
        YLeaf cptpclockoutput1ppsinterface; //type: string
        YLeaf cptpclocktodinterface; //type: string

}; // CiscoPtpMib::Cptpclocknodetable::Cptpclocknodeentry


class CiscoPtpMib::Cptpclockcurrentdstable : public Entity
{
    public:
        Cptpclockcurrentdstable();
        ~Cptpclockcurrentdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockcurrentdsentry; //type: CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry> > cptpclockcurrentdsentry;
        
}; // CiscoPtpMib::Cptpclockcurrentdstable


class CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry : public Entity
{
    public:
        Cptpclockcurrentdsentry();
        ~Cptpclockcurrentdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockcurrentdsdomainindex; //type: uint32
        YLeaf cptpclockcurrentdsclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockcurrentdsinstanceindex; //type: uint32
        YLeaf cptpclockcurrentdsstepsremoved; //type: uint32
        YLeaf cptpclockcurrentdsoffsetfrommaster; //type: binary
        YLeaf cptpclockcurrentdsmeanpathdelay; //type: binary

}; // CiscoPtpMib::Cptpclockcurrentdstable::Cptpclockcurrentdsentry


class CiscoPtpMib::Cptpclockparentdstable : public Entity
{
    public:
        Cptpclockparentdstable();
        ~Cptpclockparentdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockparentdsentry; //type: CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry> > cptpclockparentdsentry;
        
}; // CiscoPtpMib::Cptpclockparentdstable


class CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry : public Entity
{
    public:
        Cptpclockparentdsentry();
        ~Cptpclockparentdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockparentdsdomainindex; //type: uint32
        YLeaf cptpclockparentdsclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockparentdsinstanceindex; //type: uint32
        YLeaf cptpclockparentdsparentportidentity; //type: binary
        YLeaf cptpclockparentdsparentstats; //type: boolean
        YLeaf cptpclockparentdsoffset; //type: int32
        YLeaf cptpclockparentdsclockphchrate; //type: int32
        YLeaf cptpclockparentdsgmclockidentity; //type: binary
        YLeaf cptpclockparentdsgmclockpriority1; //type: int32
        YLeaf cptpclockparentdsgmclockpriority2; //type: int32
        YLeaf cptpclockparentdsgmclockqualityclass; //type: uint32
        YLeaf cptpclockparentdsgmclockqualityaccuracy; //type: ClockqualityaccuracytypeEnum
        YLeaf cptpclockparentdsgmclockqualityoffset; //type: uint32

}; // CiscoPtpMib::Cptpclockparentdstable::Cptpclockparentdsentry


class CiscoPtpMib::Cptpclockdefaultdstable : public Entity
{
    public:
        Cptpclockdefaultdstable();
        ~Cptpclockdefaultdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockdefaultdsentry; //type: CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry> > cptpclockdefaultdsentry;
        
}; // CiscoPtpMib::Cptpclockdefaultdstable


class CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry : public Entity
{
    public:
        Cptpclockdefaultdsentry();
        ~Cptpclockdefaultdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockdefaultdsdomainindex; //type: uint32
        YLeaf cptpclockdefaultdsclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockdefaultdsinstanceindex; //type: uint32
        YLeaf cptpclockdefaultdstwostepflag; //type: boolean
        YLeaf cptpclockdefaultdsclockidentity; //type: binary
        YLeaf cptpclockdefaultdspriority1; //type: int32
        YLeaf cptpclockdefaultdspriority2; //type: int32
        YLeaf cptpclockdefaultdsslaveonly; //type: boolean
        YLeaf cptpclockdefaultdsqualityclass; //type: uint32
        YLeaf cptpclockdefaultdsqualityaccuracy; //type: ClockqualityaccuracytypeEnum
        YLeaf cptpclockdefaultdsqualityoffset; //type: int32

}; // CiscoPtpMib::Cptpclockdefaultdstable::Cptpclockdefaultdsentry


class CiscoPtpMib::Cptpclockrunningtable : public Entity
{
    public:
        Cptpclockrunningtable();
        ~Cptpclockrunningtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockrunningentry; //type: CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry> > cptpclockrunningentry;
        
}; // CiscoPtpMib::Cptpclockrunningtable


class CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry : public Entity
{
    public:
        Cptpclockrunningentry();
        ~Cptpclockrunningentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockrunningdomainindex; //type: uint32
        YLeaf cptpclockrunningclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockrunninginstanceindex; //type: uint32
        YLeaf cptpclockrunningstate; //type: ClockstatetypeEnum
        YLeaf cptpclockrunningpacketssent; //type: uint64
        YLeaf cptpclockrunningpacketsreceived; //type: uint64

}; // CiscoPtpMib::Cptpclockrunningtable::Cptpclockrunningentry


class CiscoPtpMib::Cptpclocktimepropertiesdstable : public Entity
{
    public:
        Cptpclocktimepropertiesdstable();
        ~Cptpclocktimepropertiesdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclocktimepropertiesdsentry; //type: CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry> > cptpclocktimepropertiesdsentry;
        
}; // CiscoPtpMib::Cptpclocktimepropertiesdstable


class CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry : public Entity
{
    public:
        Cptpclocktimepropertiesdsentry();
        ~Cptpclocktimepropertiesdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclocktimepropertiesdsdomainindex; //type: uint32
        YLeaf cptpclocktimepropertiesdsclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclocktimepropertiesdsinstanceindex; //type: uint32
        YLeaf cptpclocktimepropertiesdscurrentutcoffsetvalid; //type: boolean
        YLeaf cptpclocktimepropertiesdscurrentutcoffset; //type: int32
        YLeaf cptpclocktimepropertiesdsleap59; //type: boolean
        YLeaf cptpclocktimepropertiesdsleap61; //type: boolean
        YLeaf cptpclocktimepropertiesdstimetraceable; //type: boolean
        YLeaf cptpclocktimepropertiesdsfreqtraceable; //type: boolean
        YLeaf cptpclocktimepropertiesdsptptimescale; //type: boolean
        YLeaf cptpclocktimepropertiesdssource; //type: ClocktimesourcetypeEnum

}; // CiscoPtpMib::Cptpclocktimepropertiesdstable::Cptpclocktimepropertiesdsentry


class CiscoPtpMib::Cptpclocktransdefaultdstable : public Entity
{
    public:
        Cptpclocktransdefaultdstable();
        ~Cptpclocktransdefaultdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclocktransdefaultdsentry; //type: CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry> > cptpclocktransdefaultdsentry;
        
}; // CiscoPtpMib::Cptpclocktransdefaultdstable


class CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry : public Entity
{
    public:
        Cptpclocktransdefaultdsentry();
        ~Cptpclocktransdefaultdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclocktransdefaultdsdomainindex; //type: uint32
        YLeaf cptpclocktransdefaultdsinstanceindex; //type: uint32
        YLeaf cptpclocktransdefaultdsclockidentity; //type: binary
        YLeaf cptpclocktransdefaultdsnumofports; //type: uint32
        YLeaf cptpclocktransdefaultdsdelay; //type: ClockmechanismtypeEnum
        YLeaf cptpclocktransdefaultdsprimarydomain; //type: int32

}; // CiscoPtpMib::Cptpclocktransdefaultdstable::Cptpclocktransdefaultdsentry


class CiscoPtpMib::Cptpclockporttable : public Entity
{
    public:
        Cptpclockporttable();
        ~Cptpclockporttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockportentry; //type: CiscoPtpMib::Cptpclockporttable::Cptpclockportentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttable::Cptpclockportentry> > cptpclockportentry;
        
}; // CiscoPtpMib::Cptpclockporttable


class CiscoPtpMib::Cptpclockporttable::Cptpclockportentry : public Entity
{
    public:
        Cptpclockportentry();
        ~Cptpclockportentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockportdomainindex; //type: uint32
        YLeaf cptpclockportclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockportclockinstanceindex; //type: uint32
        YLeaf cptpclockporttableportnumberindex; //type: uint32
        YLeaf cptpclockportname; //type: string
        YLeaf cptpclockportrole; //type: ClockroletypeEnum
        YLeaf cptpclockportsynconestep; //type: boolean
        YLeaf cptpclockportcurrentpeeraddresstype; //type: InetaddresstypeEnum
        YLeaf cptpclockportcurrentpeeraddress; //type: binary
        YLeaf cptpclockportnumofassociatedports; //type: uint32

}; // CiscoPtpMib::Cptpclockporttable::Cptpclockportentry


class CiscoPtpMib::Cptpclockportdstable : public Entity
{
    public:
        Cptpclockportdstable();
        ~Cptpclockportdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockportdsentry; //type: CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry> > cptpclockportdsentry;
        
}; // CiscoPtpMib::Cptpclockportdstable


class CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry : public Entity
{
    public:
        Cptpclockportdsentry();
        ~Cptpclockportdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockportdsdomainindex; //type: uint32
        YLeaf cptpclockportdsclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockportdsclockinstanceindex; //type: uint32
        YLeaf cptpclockportdsportnumberindex; //type: uint32
        YLeaf cptpclockportdsname; //type: string
        YLeaf cptpclockportdsportidentity; //type: binary
        YLeaf cptpclockportdsannouncementinterval; //type: int32
        YLeaf cptpclockportdsannouncercttimeout; //type: int32
        YLeaf cptpclockportdssyncinterval; //type: int32
        YLeaf cptpclockportdsmindelayreqinterval; //type: int32
        YLeaf cptpclockportdspeerdelayreqinterval; //type: int32
        YLeaf cptpclockportdsdelaymech; //type: ClockmechanismtypeEnum
        YLeaf cptpclockportdspeermeanpathdelay; //type: binary
        YLeaf cptpclockportdsgrantduration; //type: uint32
        YLeaf cptpclockportdsptpversion; //type: int32

}; // CiscoPtpMib::Cptpclockportdstable::Cptpclockportdsentry


class CiscoPtpMib::Cptpclockportrunningtable : public Entity
{
    public:
        Cptpclockportrunningtable();
        ~Cptpclockportrunningtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockportrunningentry; //type: CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry> > cptpclockportrunningentry;
        
}; // CiscoPtpMib::Cptpclockportrunningtable


class CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry : public Entity
{
    public:
        Cptpclockportrunningentry();
        ~Cptpclockportrunningentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockportrunningdomainindex; //type: uint32
        YLeaf cptpclockportrunningclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockportrunningclockinstanceindex; //type: uint32
        YLeaf cptpclockportrunningportnumberindex; //type: uint32
        YLeaf cptpclockportrunningname; //type: string
        YLeaf cptpclockportrunningstate; //type: ClockportstateEnum
        YLeaf cptpclockportrunningrole; //type: ClockroletypeEnum
        YLeaf cptpclockportrunninginterfaceindex; //type: int32
        YLeaf cptpclockportrunningipversion; //type: int32
        YLeaf cptpclockportrunningencapsulationtype; //type: int32
        YLeaf cptpclockportrunningtxmode; //type: ClocktxmodetypeEnum
        YLeaf cptpclockportrunningrxmode; //type: ClocktxmodetypeEnum
        YLeaf cptpclockportrunningpacketsreceived; //type: uint64
        YLeaf cptpclockportrunningpacketssent; //type: uint64

}; // CiscoPtpMib::Cptpclockportrunningtable::Cptpclockportrunningentry


class CiscoPtpMib::Cptpclockporttransdstable : public Entity
{
    public:
        Cptpclockporttransdstable();
        ~Cptpclockporttransdstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockporttransdsentry; //type: CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry> > cptpclockporttransdsentry;
        
}; // CiscoPtpMib::Cptpclockporttransdstable


class CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry : public Entity
{
    public:
        Cptpclockporttransdsentry();
        ~Cptpclockporttransdsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockporttransdsdomainindex; //type: uint32
        YLeaf cptpclockporttransdsinstanceindex; //type: uint32
        YLeaf cptpclockporttransdsportnumberindex; //type: uint32
        YLeaf cptpclockporttransdsportidentity; //type: binary
        YLeaf cptpclockporttransdslogminpdelayreqint; //type: int32
        YLeaf cptpclockporttransdsfaultyflag; //type: boolean
        YLeaf cptpclockporttransdspeermeanpathdelay; //type: binary

}; // CiscoPtpMib::Cptpclockporttransdstable::Cptpclockporttransdsentry


class CiscoPtpMib::Cptpclockportassociatetable : public Entity
{
    public:
        Cptpclockportassociatetable();
        ~Cptpclockportassociatetable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cptpclockportassociateentry; //type: CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry

        std::vector<std::shared_ptr<CISCO_PTP_MIB::CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry> > cptpclockportassociateentry;
        
}; // CiscoPtpMib::Cptpclockportassociatetable


class CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry : public Entity
{
    public:
        Cptpclockportassociateentry();
        ~Cptpclockportassociateentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cptpclockportcurrentdomainindex; //type: uint32
        YLeaf cptpclockportcurrentclocktypeindex; //type: ClocktypeEnum
        YLeaf cptpclockportcurrentclockinstanceindex; //type: uint32
        YLeaf cptpclockportcurrentportnumberindex; //type: uint32
        YLeaf cptpclockportassociateportindex; //type: uint32
        YLeaf cptpclockportassociateaddresstype; //type: InetaddresstypeEnum
        YLeaf cptpclockportassociateaddress; //type: binary
        YLeaf cptpclockportassociatepacketssent; //type: uint64
        YLeaf cptpclockportassociatepacketsreceived; //type: uint64
        YLeaf cptpclockportassociateinerrors; //type: uint64
        YLeaf cptpclockportassociateouterrors; //type: uint64

}; // CiscoPtpMib::Cptpclockportassociatetable::Cptpclockportassociateentry

class ClockmechanismtypeEnum : public Enum
{
    public:
        static const Enum::YLeaf e2e;
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf disabled;

};

class ClockportstateEnum : public Enum
{
    public:
        static const Enum::YLeaf initializing;
        static const Enum::YLeaf faulty;
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf listening;
        static const Enum::YLeaf preMaster;
        static const Enum::YLeaf master;
        static const Enum::YLeaf passive;
        static const Enum::YLeaf uncalibrated;
        static const Enum::YLeaf slave;

};

class ClocktimesourcetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf atomicClock;
        static const Enum::YLeaf gps;
        static const Enum::YLeaf terrestrialRadio;
        static const Enum::YLeaf ptp;
        static const Enum::YLeaf ntp;
        static const Enum::YLeaf handSet;
        static const Enum::YLeaf other;
        static const Enum::YLeaf internalOsillator;

};

class ClockprofiletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf telecom;
        static const Enum::YLeaf vendorspecific;

};

class ClockroletypeEnum : public Enum
{
    public:
        static const Enum::YLeaf master;
        static const Enum::YLeaf slave;

};

class ClocktypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ordinaryClock;
        static const Enum::YLeaf boundaryClock;
        static const Enum::YLeaf transparentClock;
        static const Enum::YLeaf boundaryNode;

};

class ClocktxmodetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf multicastmix;

};

class ClockqualityaccuracytypeEnum : public Enum
{
    public:
        static const Enum::YLeaf reserved00;
        static const Enum::YLeaf nanoSecond25;
        static const Enum::YLeaf nanoSecond100;
        static const Enum::YLeaf nanoSecond250;
        static const Enum::YLeaf microSec1;
        static const Enum::YLeaf microSec2dot5;
        static const Enum::YLeaf microSec10;
        static const Enum::YLeaf microSec25;
        static const Enum::YLeaf microSec100;
        static const Enum::YLeaf microSec250;
        static const Enum::YLeaf milliSec1;
        static const Enum::YLeaf milliSec2dot5;
        static const Enum::YLeaf milliSec10;
        static const Enum::YLeaf milliSec25;
        static const Enum::YLeaf milliSec100;
        static const Enum::YLeaf milliSec250;
        static const Enum::YLeaf second1;
        static const Enum::YLeaf second10;
        static const Enum::YLeaf secondGreater10;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf reserved255;

};

class ClockstatetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf freerun;
        static const Enum::YLeaf holdover;
        static const Enum::YLeaf acquiring;
        static const Enum::YLeaf frequencyLocked;
        static const Enum::YLeaf phaseAligned;

};


}
}

#endif /* _CISCO_PTP_MIB_ */

