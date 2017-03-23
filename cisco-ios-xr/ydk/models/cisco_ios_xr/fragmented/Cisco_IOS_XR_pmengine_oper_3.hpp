#ifndef _CISCO_IOS_XR_PMENGINE_OPER_3_
#define _CISCO_IOS_XR_PMENGINE_OPER_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24 : public Entity
{
    public:
        DwdmHour24();
        ~DwdmHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24Optics; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics
        class DwdmHour24Fecs; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs
        class DwdmHour24Otns; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics> dwdm_hour24_optics;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs> dwdm_hour24fecs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns> dwdm_hour24otns;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics : public Entity
{
    public:
        DwdmHour24Optics();
        ~DwdmHour24Optics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24Optic; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic> > dwdm_hour24_optic;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic : public Entity
{
    public:
        DwdmHour24Optic();
        ~DwdmHour24Optic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc
        class LbcPc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc
        class Opt; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt
        class Opr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr
        class Cd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd
        class Dgd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd
        class Pmd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd
        class Osnr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr
        class CenterWavelength; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength
        class Pdl; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl
        class Pcr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr
        class Pn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn
        class RxSigPow; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd> cd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength> center_wavelength;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd> dgd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc> lbc_pc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr> opr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt> opt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr> osnr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr> pcr;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl> pdl;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd> pmd;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn> pn;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow> rx_sig_pow;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc : public Entity
{
    public:
        LbcPc();
        ~LbcPc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt : public Entity
{
    public:
        Opt();
        ~Opt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr : public Entity
{
    public:
        Opr();
        ~Opr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd : public Entity
{
    public:
        Cd();
        ~Cd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd : public Entity
{
    public:
        Dgd();
        ~Dgd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd : public Entity
{
    public:
        Pmd();
        ~Pmd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr : public Entity
{
    public:
        Osnr();
        ~Osnr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength : public Entity
{
    public:
        CenterWavelength();
        ~CenterWavelength();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl : public Entity
{
    public:
        Pdl();
        ~Pdl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr : public Entity
{
    public:
        Pcr();
        ~Pcr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn : public Entity
{
    public:
        Pn();
        ~Pn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow : public Entity
{
    public:
        RxSigPow();
        ~RxSigPow();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff : public Entity
{
    public:
        LowSigFreqOff();
        ~LowSigFreqOff();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf valid; //type: boolean
        YLeaf minimum; //type: int32
        YLeaf average; //type: int32
        YLeaf maximum; //type: int32
        YLeaf minimum_threshold; //type: int32
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: int32
        YLeaf maximum_tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs : public Entity
{
    public:
        DwdmHour24Fecs();
        ~DwdmHour24Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24Fec; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec> > dwdm_hour24fec;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec : public Entity
{
    public:
        DwdmHour24Fec();
        ~DwdmHour24Fec();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class EcBits; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits
        class UcWords; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer
        class Q; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q
        class Qmargin; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits> ec_bits;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q> q;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin> qmargin;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords> uc_words;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits : public Entity
{
    public:
        EcBits();
        ~EcBits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords : public Entity
{
    public:
        UcWords();
        ~UcWords();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer : public Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer : public Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q : public Entity
{
    public:
        Q();
        ~Q();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin : public Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: string
        YLeaf average; //type: string
        YLeaf maximum; //type: string
        YLeaf minimum_threshold; //type: string
        YLeaf minimum_tca_report; //type: boolean
        YLeaf maximum_threshold; //type: string
        YLeaf maximum_tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns : public Entity
{
    public:
        DwdmHour24Otns();
        ~DwdmHour24Otns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DwdmHour24Otn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn> > dwdm_hour24otn;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn : public Entity
{
    public:
        DwdmHour24Otn();
        ~DwdmHour24Otn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc
        class EsNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe
        class FcNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe
        class EsFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe
        class FcFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe> bbe_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe> bbe_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe> bber_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe> bber_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe> es_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe> es_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe> esr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe> esr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe> fc_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe> fc_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc> lbc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe> ses_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe> ses_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe> sesr_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe> sesr_ne;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe> uas_fe;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe> uas_ne;


}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc : public Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe : public Entity
{
    public:
        EsNe();
        ~EsNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe : public Entity
{
    public:
        EsrNe();
        ~EsrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe : public Entity
{
    public:
        SesNe();
        ~SesNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe : public Entity
{
    public:
        SesrNe();
        ~SesrNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe : public Entity
{
    public:
        UasNe();
        ~UasNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe : public Entity
{
    public:
        BbeNe();
        ~BbeNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe : public Entity
{
    public:
        BberNe();
        ~BberNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe : public Entity
{
    public:
        FcNe();
        ~FcNe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe : public Entity
{
    public:
        EsFe();
        ~EsFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe : public Entity
{
    public:
        EsrFe();
        ~EsrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe : public Entity
{
    public:
        SesFe();
        ~SesFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe : public Entity
{
    public:
        SesrFe();
        ~SesrFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe : public Entity
{
    public:
        UasFe();
        ~UasFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe : public Entity
{
    public:
        BbeFe();
        ~BbeFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe : public Entity
{
    public:
        BberFe();
        ~BberFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: string
        YLeaf threshold; //type: string
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe : public Entity
{
    public:
        FcFe();
        ~FcFe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe


class PerformanceManagement::Oc : public Entity
{
    public:
        Oc();
        ~Oc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcPorts; //type: PerformanceManagement::Oc::OcPorts

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts> oc_ports;


}; // PerformanceManagement::Oc


class PerformanceManagement::Oc::OcPorts : public Entity
{
    public:
        OcPorts();
        ~OcPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcPort; //type: PerformanceManagement::Oc::OcPorts::OcPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort> > oc_port;


}; // PerformanceManagement::Oc::OcPorts


class PerformanceManagement::Oc::OcPorts::OcPort : public Entity
{
    public:
        OcPort();
        ~OcPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class OcCurrent; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent> oc_current;


}; // PerformanceManagement::Oc::OcPorts::OcPort


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent : public Entity
{
    public:
        OcCurrent();
        ~OcCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24
        class OcMinute15; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24> oc_hour24;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15> oc_minute15;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24 : public Entity
{
    public:
        OcHour24();
        ~OcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24Ocns; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns> oc_hour24ocns;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns : public Entity
{
    public:
        OcHour24Ocns();
        ~OcHour24Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcHour24Ocn; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn> > oc_hour24ocn;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn : public Entity
{
    public:
        OcHour24Ocn();
        ~OcHour24Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string

        class Section; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section
        class Line; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line
        class FeLine; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine> fe_line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line> line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section> section;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf section_status; //type: int32

        class SectionESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs> section_c_vs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs> section_sef_ss;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs : public Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs : public Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs : public Entity
{
    public:
        SectionSefSs();
        ~SectionSefSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs : public Entity
{
    public:
        SectionCVs();
        ~SectionCVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf line_status; //type: int32

        class LineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs> line_ua_ss;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs : public Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs : public Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs : public Entity
{
    public:
        LineCVs();
        ~LineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs : public Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs : public Entity
{
    public:
        LineFcLs();
        ~LineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine : public Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FarEndLineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs : public Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs : public Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs : public Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs : public Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs : public Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15 : public Entity
{
    public:
        OcMinute15();
        ~OcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcMinute15Ocns; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns> oc_minute15ocns;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns : public Entity
{
    public:
        OcMinute15Ocns();
        ~OcMinute15Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class OcMinute15Ocn; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn> > oc_minute15ocn;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn : public Entity
{
    public:
        OcMinute15Ocn();
        ~OcMinute15Ocn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string

        class Section; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section
        class Line; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line
        class FeLine; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine> fe_line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line> line;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section> section;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section : public Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf section_status; //type: int32

        class SectionESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs> section_c_vs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs> section_sef_ss;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs : public Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs : public Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs : public Entity
{
    public:
        SectionSefSs();
        ~SectionSefSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs : public Entity
{
    public:
        SectionCVs();
        ~SectionCVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf line_status; //type: int32

        class LineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs> line_fc_ls;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs> line_ua_ss;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs : public Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs : public Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs : public Entity
{
    public:
        LineCVs();
        ~LineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs : public Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs : public Entity
{
    public:
        LineFcLs();
        ~LineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine : public Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class FarEndLineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;


}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs : public Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs : public Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs : public Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs : public Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs : public Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint32
        YLeaf threshold; //type: uint32
        YLeaf tca_report; //type: boolean



}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Ethernet : public Entity
{
    public:
        Ethernet();
        ~Ethernet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetPorts; //type: PerformanceManagement::Ethernet::EthernetPorts

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts> ethernet_ports;


}; // PerformanceManagement::Ethernet


class PerformanceManagement::Ethernet::EthernetPorts : public Entity
{
    public:
        EthernetPorts();
        ~EthernetPorts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetPort; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort> > ethernet_port;


}; // PerformanceManagement::Ethernet::EthernetPorts


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort : public Entity
{
    public:
        EthernetPort();
        ~EthernetPort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class EthernetCurrent; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent> ethernet_current;


}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent : public Entity
{
    public:
        EthernetCurrent();
        ~EthernetCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class EthernetSecond30; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30
        class EthernetHour24; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24
        class Minute15; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24> ethernet_hour24;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30> ethernet_second30;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15> minute15;


}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30 : public Entity
{
    public:
        EthernetSecond30();
        ~EthernetSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30Ethers; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers> second30_ethers;


}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers : public Entity
{
    public:
        Second30Ethers();
        ~Second30Ethers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Second30Ether; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether

        std::vector<std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether> > second30_ether;


}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether : public Entity
{
    public:
        Second30Ether();
        ~Second30Ether();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf slot_number; //type: int32
        YLeaf index_; //type: uint32
        YLeaf valid; //type: boolean
        YLeaf timestamp; //type: string
        YLeaf last_clear_time; //type: string
        YLeaf last_clear30_sec_time; //type: string
        YLeaf last_clear15_min_time; //type: string
        YLeaf last_clear24_hr_time; //type: string
        YLeaf sec30_support; //type: boolean

        class RxPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt
        class StatPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt
        class OctetStat; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat
        class OversizePktStat; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat
        class JabberStat; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat
        class Ether64Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt
        class InMcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt
        class InBcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt
        class TxPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt
        class IfInErrors; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors
        class IfInOctets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets
        class InPauseFrame; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame
        class InGoodBytes; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes
        class In8021QFrames; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts
        class InDropOverrun; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun
        class InDropAbort; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther
        class InMibGiant; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant
        class InMibJabber; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber
        class InMibcrc; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc
        class InErrorCollisions; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort
        class OutDropOther; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther
        class OutErrorOther; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther
        class InErrorGiant; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant
        class InErrorRunt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments
        class InErrorOther; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther
        class InPkt64Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil
        class TxUtil; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt
        class TxFragments; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments
        class TxJabber; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber
        class TxBadFcs; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs

        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet> ether128255_octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet> ether256511_octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets> ether64_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet> ether65127_octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors> if_in_errors;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets> if_in_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames> in8021q_frames;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort> in_drop_abort;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther> in_drop_other;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun> in_drop_overrun;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions> in_error_collisions;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorFragments> in_error_fragments;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorGiant> in_error_giant;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorOther> in_error_other;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorRunt> in_error_runt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol> in_error_symbol;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes> in_good_bytes;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts> in_good_pkts;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant> in_mib_giant;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber> in_mib_jabber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc> in_mibcrc;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame> in_pause_frame;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat> jabber_stat;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat> long_frames_stat;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat> octet_stat;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames> out8021q_frames;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort> out_drop_abort;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropOther> out_drop_other;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutErrorOther> out_error_other;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes> out_good_bytes;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts> out_good_pkts;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets> out_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames> out_pause_frames;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt> rx_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxUtil> rx_util;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt> stat_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxFragments> tx_fragments;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxJabber> tx_jabber;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt> tx_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxUtil> tx_util;


}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt : public Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::RxPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt : public Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::StatPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat : public Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OctetStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat : public Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OversizePktStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat : public Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::FcsErrorsStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat : public Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::LongFramesStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat : public Entity
{
    public:
        JabberStat();
        ~JabberStat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::JabberStat


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets : public Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether64Octets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet : public Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether65127Octet


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet : public Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether128255Octet


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet : public Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether256511Octet


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet : public Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether5121023Octet


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet : public Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Ether10241518Octet


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt : public Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InUcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt : public Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt : public Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InBcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt : public Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutUcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt : public Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutBcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt : public Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutMcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt : public Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::TxPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors : public Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInErrors


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets : public Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::IfInOctets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt : public Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatMulticastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt : public Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatBroadcastPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt : public Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::EtherStatUndersizedPkt


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets : public Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutOctets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame : public Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPauseFrame


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes : public Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodBytes


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames : public Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::In8021QFrames


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets : public Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InPkts1519MaxOctets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts : public Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InGoodPkts


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun : public Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOverrun


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort : public Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropAbort


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan : public Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidVlan


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac : public Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidDmac


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap : public Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropInvalidEncap


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther : public Entity
{
    public:
        InDropOther();
        ~InDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InDropOther


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant : public Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibGiant


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber : public Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibJabber


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc : public Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InMibcrc


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions : public Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorCollisions


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol : public Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::InErrorSymbol


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes : public Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodBytes


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames : public Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::Out8021QFrames


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames : public Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPauseFrames


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets : public Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutPkts1519MaxOctets


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts : public Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutGoodPkts


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun : public Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropUnderrun


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort : public Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf data; //type: uint64
        YLeaf threshold; //type: uint64
        YLeaf tca_report; //type: boolean
        YLeaf valid; //type: boolean



}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether::OutDropAbort


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_3_ */

