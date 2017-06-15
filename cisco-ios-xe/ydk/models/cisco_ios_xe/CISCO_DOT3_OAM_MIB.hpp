#ifndef _CISCO_DOT3_OAM_MIB_
#define _CISCO_DOT3_OAM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_DOT3_OAM_MIB {

class CiscoDot3OamMib : public Entity
{
    public:
        CiscoDot3OamMib();
        ~CiscoDot3OamMib();

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

        class Cdot3Oamtable; //type: CiscoDot3OamMib::Cdot3Oamtable
        class Cdot3Oampeertable; //type: CiscoDot3OamMib::Cdot3Oampeertable
        class Cdot3Oamloopbacktable; //type: CiscoDot3OamMib::Cdot3Oamloopbacktable
        class Cdot3Oamstatstable; //type: CiscoDot3OamMib::Cdot3Oamstatstable
        class Cdot3Oameventconfigtable; //type: CiscoDot3OamMib::Cdot3Oameventconfigtable
        class Cdot3Oameventlogtable; //type: CiscoDot3OamMib::Cdot3Oameventlogtable

        std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oameventconfigtable> cdot3oameventconfigtable_;
        std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oameventlogtable> cdot3oameventlogtable_;
        std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oamloopbacktable> cdot3oamloopbacktable_;
        std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oampeertable> cdot3oampeertable_;
        std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oamstatstable> cdot3oamstatstable_;
        std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oamtable> cdot3oamtable_;
        
}; // CiscoDot3OamMib


class CiscoDot3OamMib::Cdot3Oamtable : public Entity
{
    public:
        Cdot3Oamtable();
        ~Cdot3Oamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdot3Oamentry; //type: CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry

        std::vector<std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry> > cdot3oamentry_;
        
}; // CiscoDot3OamMib::Cdot3Oamtable


class CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry : public Entity
{
    public:
        Cdot3Oamentry();
        ~Cdot3Oamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdot3oamadminstate; //type: Cdot3OamadminstateEnum
        YLeaf cdot3oamoperstatus; //type: Cdot3OamoperstatusEnum
        YLeaf cdot3oammode; //type: Cdot3OammodeEnum
        YLeaf cdot3oammaxoampdusize; //type: uint32
        YLeaf cdot3oamconfigrevision; //type: uint32
        YLeaf cdot3oamfunctionssupported; //type: Cdot3Oamfunctionssupported
        class Cdot3OamadminstateEnum;
        class Cdot3OamoperstatusEnum;
        class Cdot3OammodeEnum;

}; // CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry


class CiscoDot3OamMib::Cdot3Oampeertable : public Entity
{
    public:
        Cdot3Oampeertable();
        ~Cdot3Oampeertable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdot3Oampeerentry; //type: CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry

        std::vector<std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry> > cdot3oampeerentry_;
        
}; // CiscoDot3OamMib::Cdot3Oampeertable


class CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry : public Entity
{
    public:
        Cdot3Oampeerentry();
        ~Cdot3Oampeerentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdot3oampeermacaddress; //type: string
        YLeaf cdot3oampeervendoroui; //type: binary
        YLeaf cdot3oampeervendorinfo; //type: uint32
        YLeaf cdot3oampeermode; //type: Cdot3OampeermodeEnum
        YLeaf cdot3oampeermaxoampdusize; //type: uint32
        YLeaf cdot3oampeerconfigrevision; //type: uint32
        YLeaf cdot3oampeerfunctionssupported; //type: Cdot3Oampeerfunctionssupported
        class Cdot3OampeermodeEnum;

}; // CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry


class CiscoDot3OamMib::Cdot3Oamloopbacktable : public Entity
{
    public:
        Cdot3Oamloopbacktable();
        ~Cdot3Oamloopbacktable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdot3Oamloopbackentry; //type: CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry

        std::vector<std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry> > cdot3oamloopbackentry_;
        
}; // CiscoDot3OamMib::Cdot3Oamloopbacktable


class CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry : public Entity
{
    public:
        Cdot3Oamloopbackentry();
        ~Cdot3Oamloopbackentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdot3oamloopbackstatus; //type: Cdot3OamloopbackstatusEnum
        YLeaf cdot3oamloopbackignorerx; //type: Cdot3OamloopbackignorerxEnum
        class Cdot3OamloopbackstatusEnum;
        class Cdot3OamloopbackignorerxEnum;

}; // CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry


class CiscoDot3OamMib::Cdot3Oamstatstable : public Entity
{
    public:
        Cdot3Oamstatstable();
        ~Cdot3Oamstatstable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdot3Oamstatsentry; //type: CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry

        std::vector<std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry> > cdot3oamstatsentry_;
        
}; // CiscoDot3OamMib::Cdot3Oamstatstable


class CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry : public Entity
{
    public:
        Cdot3Oamstatsentry();
        ~Cdot3Oamstatsentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdot3oaminformationtx; //type: uint32
        YLeaf cdot3oaminformationrx; //type: uint32
        YLeaf cdot3oamuniqueeventnotificationtx; //type: uint32
        YLeaf cdot3oamuniqueeventnotificationrx; //type: uint32
        YLeaf cdot3oamduplicateeventnotificationtx; //type: uint32
        YLeaf cdot3oamduplicateeventnotificationrx; //type: uint32
        YLeaf cdot3oamloopbackcontroltx; //type: uint32
        YLeaf cdot3oamloopbackcontrolrx; //type: uint32
        YLeaf cdot3oamvariablerequesttx; //type: uint32
        YLeaf cdot3oamvariablerequestrx; //type: uint32
        YLeaf cdot3oamvariableresponsetx; //type: uint32
        YLeaf cdot3oamvariableresponserx; //type: uint32
        YLeaf cdot3oamorgspecifictx; //type: uint32
        YLeaf cdot3oamorgspecificrx; //type: uint32
        YLeaf cdot3oamunsupportedcodestx; //type: uint32
        YLeaf cdot3oamunsupportedcodesrx; //type: uint32
        YLeaf cdot3oamframeslostduetooam; //type: uint32

}; // CiscoDot3OamMib::Cdot3Oamstatstable::Cdot3Oamstatsentry


class CiscoDot3OamMib::Cdot3Oameventconfigtable : public Entity
{
    public:
        Cdot3Oameventconfigtable();
        ~Cdot3Oameventconfigtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdot3Oameventconfigentry; //type: CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry

        std::vector<std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry> > cdot3oameventconfigentry_;
        
}; // CiscoDot3OamMib::Cdot3Oameventconfigtable


class CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry : public Entity
{
    public:
        Cdot3Oameventconfigentry();
        ~Cdot3Oameventconfigentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdot3oamerrsymperiodwindowhi; //type: uint32
        YLeaf cdot3oamerrsymperiodwindowlo; //type: uint32
        YLeaf cdot3oamerrsymperiodthresholdhi; //type: uint32
        YLeaf cdot3oamerrsymperiodthresholdlo; //type: uint32
        YLeaf cdot3oamerrsymperiodevnotifenable; //type: boolean
        YLeaf cdot3oamerrframeperiodwindow; //type: uint32
        YLeaf cdot3oamerrframeperiodthreshold; //type: uint32
        YLeaf cdot3oamerrframeperiodevnotifenable; //type: boolean
        YLeaf cdot3oamerrframewindow; //type: uint32
        YLeaf cdot3oamerrframethreshold; //type: uint32
        YLeaf cdot3oamerrframeevnotifenable; //type: boolean
        YLeaf cdot3oamerrframesecssummarywindow; //type: int32
        YLeaf cdot3oamerrframesecssummarythreshold; //type: int32
        YLeaf cdot3oamerrframesecsevnotifenable; //type: boolean
        YLeaf cdot3oamdyinggaspenable; //type: boolean
        YLeaf cdot3oamcriticaleventenable; //type: boolean

}; // CiscoDot3OamMib::Cdot3Oameventconfigtable::Cdot3Oameventconfigentry


class CiscoDot3OamMib::Cdot3Oameventlogtable : public Entity
{
    public:
        Cdot3Oameventlogtable();
        ~Cdot3Oameventlogtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cdot3Oameventlogentry; //type: CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry

        std::vector<std::shared_ptr<CISCO_DOT3_OAM_MIB::CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry> > cdot3oameventlogentry_;
        
}; // CiscoDot3OamMib::Cdot3Oameventlogtable


class CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry : public Entity
{
    public:
        Cdot3Oameventlogentry();
        ~Cdot3Oameventlogentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf cdot3oameventlogindex; //type: uint32
        YLeaf cdot3oameventlogtimestamp; //type: uint32
        YLeaf cdot3oameventlogoui; //type: binary
        YLeaf cdot3oameventlogtype; //type: uint32
        YLeaf cdot3oameventloglocation; //type: Cdot3OameventloglocationEnum
        YLeaf cdot3oameventlogwindowhi; //type: uint32
        YLeaf cdot3oameventlogwindowlo; //type: uint32
        YLeaf cdot3oameventlogthresholdhi; //type: uint32
        YLeaf cdot3oameventlogthresholdlo; //type: uint32
        YLeaf cdot3oameventlogvalue; //type: uint64
        YLeaf cdot3oameventlogrunningtotal; //type: uint64
        YLeaf cdot3oameventlogeventtotal; //type: uint32
        class Cdot3OameventloglocationEnum;

}; // CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry

class CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamadminstateEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};

class CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OamoperstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf linkFault;
        static const Enum::YLeaf passiveWait;
        static const Enum::YLeaf activeSendLocal;
        static const Enum::YLeaf sendLocalAndRemote;
        static const Enum::YLeaf sendLocalAndRemoteOk;
        static const Enum::YLeaf oamPeeringLocallyRejected;
        static const Enum::YLeaf oamPeeringRemotelyRejected;
        static const Enum::YLeaf operational;
        static const Enum::YLeaf nonOperHalfDuplex;

};

class CiscoDot3OamMib::Cdot3Oamtable::Cdot3Oamentry::Cdot3OammodeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;

};

class CiscoDot3OamMib::Cdot3Oampeertable::Cdot3Oampeerentry::Cdot3OampeermodeEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf passive;
        static const Enum::YLeaf unknown;

};

class CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf noLoopback;
        static const Enum::YLeaf initiatingLoopback;
        static const Enum::YLeaf remoteLoopback;
        static const Enum::YLeaf terminatingLoopback;
        static const Enum::YLeaf localLoopback;
        static const Enum::YLeaf unknown;

};

class CiscoDot3OamMib::Cdot3Oamloopbacktable::Cdot3Oamloopbackentry::Cdot3OamloopbackignorerxEnum : public Enum
{
    public:
        static const Enum::YLeaf ignore;
        static const Enum::YLeaf process;

};

class CiscoDot3OamMib::Cdot3Oameventlogtable::Cdot3Oameventlogentry::Cdot3OameventloglocationEnum : public Enum
{
    public:
        static const Enum::YLeaf local;
        static const Enum::YLeaf remote;

};


}
}

#endif /* _CISCO_DOT3_OAM_MIB_ */

