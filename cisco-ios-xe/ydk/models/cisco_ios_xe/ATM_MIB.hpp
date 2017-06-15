#ifndef _ATM_MIB_
#define _ATM_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace ydk {
namespace ATM_MIB {

class AtmMib : public Entity
{
    public:
        AtmMib();
        ~AtmMib();

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

        class Atmmibobjects; //type: AtmMib::Atmmibobjects
        class Atminterfaceconftable; //type: AtmMib::Atminterfaceconftable
        class Atminterfaceds3Plcptable; //type: AtmMib::Atminterfaceds3Plcptable
        class Atminterfacetctable; //type: AtmMib::Atminterfacetctable
        class Atmtrafficdescrparamtable; //type: AtmMib::Atmtrafficdescrparamtable
        class Atmvpltable; //type: AtmMib::Atmvpltable
        class Atmvcltable; //type: AtmMib::Atmvcltable
        class Atmvpcrossconnecttable; //type: AtmMib::Atmvpcrossconnecttable
        class Atmvccrossconnecttable; //type: AtmMib::Atmvccrossconnecttable
        class Aal5Vcctable; //type: AtmMib::Aal5Vcctable

        std::shared_ptr<ATM_MIB::AtmMib::Aal5Vcctable> aal5vcctable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceconftable> atminterfaceconftable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceds3Plcptable> atminterfaceds3plcptable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atminterfacetctable> atminterfacetctable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atmmibobjects> atmmibobjects_;
        std::shared_ptr<ATM_MIB::AtmMib::Atmtrafficdescrparamtable> atmtrafficdescrparamtable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvccrossconnecttable> atmvccrossconnecttable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvcltable> atmvcltable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvpcrossconnecttable> atmvpcrossconnecttable_;
        std::shared_ptr<ATM_MIB::AtmMib::Atmvpltable> atmvpltable_;
        
}; // AtmMib


class AtmMib::Atmmibobjects : public Entity
{
    public:
        Atmmibobjects();
        ~Atmmibobjects();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atmvpcrossconnectindexnext; //type: int32
        YLeaf atmvccrossconnectindexnext; //type: int32
        YLeaf atmtrafficdescrparamindexnext; //type: int32

}; // AtmMib::Atmmibobjects


class AtmMib::Atminterfaceconftable : public Entity
{
    public:
        Atminterfaceconftable();
        ~Atminterfaceconftable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atminterfaceconfentry; //type: AtmMib::Atminterfaceconftable::Atminterfaceconfentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceconftable::Atminterfaceconfentry> > atminterfaceconfentry_;
        
}; // AtmMib::Atminterfaceconftable


class AtmMib::Atminterfaceconftable::Atminterfaceconfentry : public Entity
{
    public:
        Atminterfaceconfentry();
        ~Atminterfaceconfentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf atminterfacemaxvpcs; //type: int32
        YLeaf atminterfacemaxvccs; //type: int32
        YLeaf atminterfaceconfvpcs; //type: int32
        YLeaf atminterfaceconfvccs; //type: int32
        YLeaf atminterfacemaxactivevpibits; //type: int32
        YLeaf atminterfacemaxactivevcibits; //type: int32
        YLeaf atminterfaceilmivpi; //type: int32
        YLeaf atminterfaceilmivci; //type: int32
        YLeaf atminterfaceaddresstype; //type: AtminterfaceaddresstypeEnum
        YLeaf atminterfaceadminaddress; //type: string
        YLeaf atminterfacemyneighboripaddress; //type: string
        YLeaf atminterfacemyneighborifname; //type: string
        YLeaf atminterfacecurrentmaxvpibits; //type: int32
        YLeaf atminterfacecurrentmaxvcibits; //type: int32
        YLeaf atminterfacesubscraddress; //type: string
        YLeaf atmintfpvcfailures; //type: uint32
        YLeaf atmintfcurrentlyfailingpvcls; //type: uint32
        YLeaf atmintfpvcfailurestrapenable; //type: boolean
        YLeaf atmintfpvcnotificationinterval; //type: int32
        YLeaf atmpreviouslyfailedpvclinterval; //type: int32
        YLeaf catmintfcurrentlydowntouppvcls; //type: uint32
        YLeaf catmintfoamfailedpvcls; //type: uint32
        YLeaf catmintfcurrentoamfailingpvcls; //type: uint32
        YLeaf catmintfsegccoamfailedpvcls; //type: uint32
        YLeaf catmintfcursegccoamfailingpvcls; //type: uint32
        YLeaf catmintfendccoamfailedpvcls; //type: uint32
        YLeaf catmintfcurendccoamfailingpvcls; //type: uint32
        YLeaf catmintfaisrdioamfailedpvcls; //type: uint32
        YLeaf catmintfcuraisrdioamfailingpvcls; //type: uint32
        YLeaf catmintfanyoamfailedpvcls; //type: uint32
        YLeaf catmintfcuranyoamfailingpvcls; //type: uint32
        YLeaf catmintftypeofoamfailure; //type: CatmoamfailuretypeEnum
        YLeaf catmintfoamrcovedpvcls; //type: uint32
        YLeaf catmintfcurrentoamrcovingpvcls; //type: uint32
        YLeaf catmintfsegccoamrcovedpvcls; //type: uint32
        YLeaf catmintfcursegccoamrcovingpvcls; //type: uint32
        YLeaf catmintfendccoamrcovedpvcls; //type: uint32
        YLeaf catmintfcurendccoamrcovingpvcls; //type: uint32
        YLeaf catmintfaisrdioamrcovedpvcls; //type: uint32
        YLeaf catmintfcuraisrdioamrcovingpvcls; //type: uint32
        YLeaf catmintfanyoamrcovedpvcls; //type: uint32
        YLeaf catmintfcuranyoamrcovingpvcls; //type: uint32
        YLeaf catmintftypeofoamrecover; //type: CatmoamrecoverytypeEnum
        YLeaf atmintfcurrentlydowntouppvcls; //type: uint32
        YLeaf atmintfoamfailedpvcls; //type: uint32
        YLeaf atmintfcurrentlyoamfailingpvcls; //type: uint32
        class AtminterfaceaddresstypeEnum;

}; // AtmMib::Atminterfaceconftable::Atminterfaceconfentry


class AtmMib::Atminterfaceds3Plcptable : public Entity
{
    public:
        Atminterfaceds3Plcptable();
        ~Atminterfaceds3Plcptable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atminterfaceds3Plcpentry; //type: AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry> > atminterfaceds3plcpentry_;
        
}; // AtmMib::Atminterfaceds3Plcptable


class AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry : public Entity
{
    public:
        Atminterfaceds3Plcpentry();
        ~Atminterfaceds3Plcpentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf atminterfaceds3plcpsefss; //type: uint32
        YLeaf atminterfaceds3plcpalarmstate; //type: Atminterfaceds3PlcpalarmstateEnum
        YLeaf atminterfaceds3plcpuass; //type: uint32
        class Atminterfaceds3PlcpalarmstateEnum;

}; // AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry


class AtmMib::Atminterfacetctable : public Entity
{
    public:
        Atminterfacetctable();
        ~Atminterfacetctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atminterfacetcentry; //type: AtmMib::Atminterfacetctable::Atminterfacetcentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atminterfacetctable::Atminterfacetcentry> > atminterfacetcentry_;
        
}; // AtmMib::Atminterfacetctable


class AtmMib::Atminterfacetctable::Atminterfacetcentry : public Entity
{
    public:
        Atminterfacetcentry();
        ~Atminterfacetcentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf atminterfaceocdevents; //type: uint32
        YLeaf atminterfacetcalarmstate; //type: AtminterfacetcalarmstateEnum
        class AtminterfacetcalarmstateEnum;

}; // AtmMib::Atminterfacetctable::Atminterfacetcentry


class AtmMib::Atmtrafficdescrparamtable : public Entity
{
    public:
        Atmtrafficdescrparamtable();
        ~Atmtrafficdescrparamtable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmtrafficdescrparamentry; //type: AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry> > atmtrafficdescrparamentry_;
        
}; // AtmMib::Atmtrafficdescrparamtable


class AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry : public Entity
{
    public:
        Atmtrafficdescrparamentry();
        ~Atmtrafficdescrparamentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atmtrafficdescrparamindex; //type: int32
        YLeaf atmtrafficdescrtype; //type: string
        YLeaf atmtrafficdescrparam1; //type: int32
        YLeaf atmtrafficdescrparam2; //type: int32
        YLeaf atmtrafficdescrparam3; //type: int32
        YLeaf atmtrafficdescrparam4; //type: int32
        YLeaf atmtrafficdescrparam5; //type: int32
        YLeaf atmtrafficqosclass; //type: int32
        YLeaf atmtrafficdescrrowstatus; //type: RowstatusEnum
        YLeaf atmservicecategory; //type: AtmservicecategoryEnum
        YLeaf atmtrafficframediscard; //type: boolean

}; // AtmMib::Atmtrafficdescrparamtable::Atmtrafficdescrparamentry


class AtmMib::Atmvpltable : public Entity
{
    public:
        Atmvpltable();
        ~Atmvpltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmvplentry; //type: AtmMib::Atmvpltable::Atmvplentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvpltable::Atmvplentry> > atmvplentry_;
        
}; // AtmMib::Atmvpltable


class AtmMib::Atmvpltable::Atmvplentry : public Entity
{
    public:
        Atmvplentry();
        ~Atmvplentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf atmvplvpi; //type: int32
        YLeaf atmvpladminstatus; //type: AtmvorxadminstatusEnum
        YLeaf atmvploperstatus; //type: AtmvorxoperstatusEnum
        YLeaf atmvpllastchange; //type: uint32
        YLeaf atmvplreceivetrafficdescrindex; //type: int32
        YLeaf atmvpltransmittrafficdescrindex; //type: int32
        YLeaf atmvplcrossconnectidentifier; //type: int32
        YLeaf atmvplrowstatus; //type: RowstatusEnum
        YLeaf atmvplcasttype; //type: AtmconncasttypeEnum
        YLeaf atmvplconnkind; //type: AtmconnkindEnum

}; // AtmMib::Atmvpltable::Atmvplentry


class AtmMib::Atmvcltable : public Entity
{
    public:
        Atmvcltable();
        ~Atmvcltable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmvclentry; //type: AtmMib::Atmvcltable::Atmvclentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvcltable::Atmvclentry> > atmvclentry_;
        
}; // AtmMib::Atmvcltable


class AtmMib::Atmvcltable::Atmvclentry : public Entity
{
    public:
        Atmvclentry();
        ~Atmvclentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf atmvclvpi; //type: int32
        YLeaf atmvclvci; //type: int32
        YLeaf atmvcladminstatus; //type: AtmvorxadminstatusEnum
        YLeaf atmvcloperstatus; //type: AtmvorxoperstatusEnum
        YLeaf atmvcllastchange; //type: uint32
        YLeaf atmvclreceivetrafficdescrindex; //type: int32
        YLeaf atmvcltransmittrafficdescrindex; //type: int32
        YLeaf atmvccaaltype; //type: AtmvccaaltypeEnum
        YLeaf atmvccaal5cpcstransmitsdusize; //type: int32
        YLeaf atmvccaal5cpcsreceivesdusize; //type: int32
        YLeaf atmvccaal5encapstype; //type: Atmvccaal5EncapstypeEnum
        YLeaf atmvclcrossconnectidentifier; //type: int32
        YLeaf atmvclrowstatus; //type: RowstatusEnum
        YLeaf atmvclcasttype; //type: AtmconncasttypeEnum
        YLeaf atmvclconnkind; //type: AtmconnkindEnum
        YLeaf catmxvcloamloopbackfreq; //type: uint32
        YLeaf catmxvcloamretryfreq; //type: uint32
        YLeaf catmxvcloamupretrycount; //type: uint32
        YLeaf catmxvcloamdownretrycount; //type: uint32
        YLeaf catmxvcloamendccactcount; //type: uint32
        YLeaf catmxvcloamendccdeactcount; //type: uint32
        YLeaf catmxvcloamendccretryfreq; //type: uint32
        YLeaf catmxvcloamsegccactcount; //type: uint32
        YLeaf catmxvcloamsegccdeactcount; //type: uint32
        YLeaf catmxvcloamsegccretryfreq; //type: uint32
        YLeaf catmxvcloammanage; //type: boolean
        YLeaf catmxvcloamloopbkstatus; //type: CatmxvcloamloopbkstatusEnum
        YLeaf catmxvcloamvcstate; //type: CatmxvcloamvcstateEnum
        YLeaf catmxvcloamendccstatus; //type: OamccstatusEnum
        YLeaf catmxvcloamsegccstatus; //type: OamccstatusEnum
        YLeaf catmxvcloamendccvcstate; //type: OamccvcstateEnum
        YLeaf catmxvcloamsegccvcstate; //type: OamccvcstateEnum
        YLeaf catmxvcloamcellsreceived; //type: uint32
        YLeaf catmxvcloamcellssent; //type: uint32
        YLeaf catmxvcloamcellsdropped; //type: uint32
        YLeaf catmxvcloaminf5ais; //type: uint32
        YLeaf catmxvcloamoutf5ais; //type: uint32
        YLeaf catmxvcloaminf5rdi; //type: uint32
        YLeaf catmxvcloamoutf5rdi; //type: uint32
        class AtmvccaaltypeEnum;
        class Atmvccaal5EncapstypeEnum;
        class CatmxvcloamloopbkstatusEnum;
        class CatmxvcloamvcstateEnum;

}; // AtmMib::Atmvcltable::Atmvclentry


class AtmMib::Atmvpcrossconnecttable : public Entity
{
    public:
        Atmvpcrossconnecttable();
        ~Atmvpcrossconnecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmvpcrossconnectentry; //type: AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry> > atmvpcrossconnectentry_;
        
}; // AtmMib::Atmvpcrossconnecttable


class AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry : public Entity
{
    public:
        Atmvpcrossconnectentry();
        ~Atmvpcrossconnectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atmvpcrossconnectindex; //type: int32
        YLeaf atmvpcrossconnectlowifindex; //type: int32
        YLeaf atmvpcrossconnectlowvpi; //type: int32
        YLeaf atmvpcrossconnecthighifindex; //type: int32
        YLeaf atmvpcrossconnecthighvpi; //type: int32
        YLeaf atmvpcrossconnectadminstatus; //type: AtmvorxadminstatusEnum
        YLeaf atmvpcrossconnectl2hoperstatus; //type: AtmvorxoperstatusEnum
        YLeaf atmvpcrossconnecth2loperstatus; //type: AtmvorxoperstatusEnum
        YLeaf atmvpcrossconnectl2hlastchange; //type: uint32
        YLeaf atmvpcrossconnecth2llastchange; //type: uint32
        YLeaf atmvpcrossconnectrowstatus; //type: RowstatusEnum

}; // AtmMib::Atmvpcrossconnecttable::Atmvpcrossconnectentry


class AtmMib::Atmvccrossconnecttable : public Entity
{
    public:
        Atmvccrossconnecttable();
        ~Atmvccrossconnecttable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Atmvccrossconnectentry; //type: AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry> > atmvccrossconnectentry_;
        
}; // AtmMib::Atmvccrossconnecttable


class AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry : public Entity
{
    public:
        Atmvccrossconnectentry();
        ~Atmvccrossconnectentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atmvccrossconnectindex; //type: int32
        YLeaf atmvccrossconnectlowifindex; //type: int32
        YLeaf atmvccrossconnectlowvpi; //type: int32
        YLeaf atmvccrossconnectlowvci; //type: int32
        YLeaf atmvccrossconnecthighifindex; //type: int32
        YLeaf atmvccrossconnecthighvpi; //type: int32
        YLeaf atmvccrossconnecthighvci; //type: int32
        YLeaf atmvccrossconnectadminstatus; //type: AtmvorxadminstatusEnum
        YLeaf atmvccrossconnectl2hoperstatus; //type: AtmvorxoperstatusEnum
        YLeaf atmvccrossconnecth2loperstatus; //type: AtmvorxoperstatusEnum
        YLeaf atmvccrossconnectl2hlastchange; //type: uint32
        YLeaf atmvccrossconnecth2llastchange; //type: uint32
        YLeaf atmvccrossconnectrowstatus; //type: RowstatusEnum

}; // AtmMib::Atmvccrossconnecttable::Atmvccrossconnectentry


class AtmMib::Aal5Vcctable : public Entity
{
    public:
        Aal5Vcctable();
        ~Aal5Vcctable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Aal5Vccentry; //type: AtmMib::Aal5Vcctable::Aal5Vccentry

        std::vector<std::shared_ptr<ATM_MIB::AtmMib::Aal5Vcctable::Aal5Vccentry> > aal5vccentry_;
        
}; // AtmMib::Aal5Vcctable


class AtmMib::Aal5Vcctable::Aal5Vccentry : public Entity
{
    public:
        Aal5Vccentry();
        ~Aal5Vccentry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        //type: int32 (refers to IF_MIB::IfMib::Iftable::Ifentry::ifindex)
        YLeaf ifindex;
        YLeaf aal5vccvpi; //type: int32
        YLeaf aal5vccvci; //type: int32
        YLeaf aal5vcccrcerrors; //type: uint32
        YLeaf aal5vccsartimeouts; //type: uint32
        YLeaf aal5vccoversizedsdus; //type: uint32
        YLeaf caal5vccinpkts; //type: uint32
        YLeaf caal5vccoutpkts; //type: uint32
        YLeaf caal5vccinoctets; //type: uint32
        YLeaf caal5vccoutoctets; //type: uint32
        YLeaf caal5vccindroppedpkts; //type: uint32
        YLeaf caal5vccoutdroppedpkts; //type: uint32
        YLeaf caal5vccindroppedoctets; //type: uint32
        YLeaf caal5vccoutdroppedoctets; //type: uint32
        YLeaf caal5vcchcinpkts; //type: uint64
        YLeaf caal5vcchcoutpkts; //type: uint64
        YLeaf caal5vcchcinoctets; //type: uint64
        YLeaf caal5vcchcoutoctets; //type: uint64
        YLeaf caal5vccextcompenabled; //type: boolean
        YLeaf caal5vccextvoice; //type: boolean
        YLeaf caal5vccextinf5oamcells; //type: uint32
        YLeaf caal5vccextoutf5oamcells; //type: uint32

}; // AtmMib::Aal5Vcctable::Aal5Vccentry

class AtmMib::Atminterfaceconftable::Atminterfaceconfentry::AtminterfaceaddresstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf private_;
        static const Enum::YLeaf nsapE164;
        static const Enum::YLeaf nativeE164;
        static const Enum::YLeaf other;

};

class AtmMib::Atminterfaceds3Plcptable::Atminterfaceds3Plcpentry::Atminterfaceds3PlcpalarmstateEnum : public Enum
{
    public:
        static const Enum::YLeaf noAlarm;
        static const Enum::YLeaf receivedFarEndAlarm;
        static const Enum::YLeaf incomingLOF;

};

class AtmMib::Atminterfacetctable::Atminterfacetcentry::AtminterfacetcalarmstateEnum : public Enum
{
    public:
        static const Enum::YLeaf noAlarm;
        static const Enum::YLeaf lcdFailure;

};

class AtmMib::Atmvcltable::Atmvclentry::AtmvccaaltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf aal1;
        static const Enum::YLeaf aal34;
        static const Enum::YLeaf aal5;
        static const Enum::YLeaf other;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf aal2;

};

class AtmMib::Atmvcltable::Atmvclentry::Atmvccaal5EncapstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf vcMultiplexRoutedProtocol;
        static const Enum::YLeaf vcMultiplexBridgedProtocol8023;
        static const Enum::YLeaf vcMultiplexBridgedProtocol8025;
        static const Enum::YLeaf vcMultiplexBridgedProtocol8026;
        static const Enum::YLeaf vcMultiplexLANemulation8023;
        static const Enum::YLeaf vcMultiplexLANemulation8025;
        static const Enum::YLeaf llcEncapsulation;
        static const Enum::YLeaf multiprotocolFrameRelaySscs;
        static const Enum::YLeaf other;
        static const Enum::YLeaf unknown;

};

class AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamloopbkstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf sent;
        static const Enum::YLeaf received;
        static const Enum::YLeaf failed;

};

class AtmMib::Atmvcltable::Atmvclentry::CatmxvcloamvcstateEnum : public Enum
{
    public:
        static const Enum::YLeaf downRetry;
        static const Enum::YLeaf verified;
        static const Enum::YLeaf notVerified;
        static const Enum::YLeaf upRetry;
        static const Enum::YLeaf aisRDI;
        static const Enum::YLeaf aisOut;
        static const Enum::YLeaf notManaged;

};


}
}

#endif /* _ATM_MIB_ */

