
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_macsec_secy_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_crypto_macsec_secy_oper {

Macsec::Macsec()
    :
    secy(std::make_shared<Macsec::Secy>())
{
    secy->parent = this;

    yang_name = "macsec"; yang_parent_name = "Cisco-IOS-XR-crypto-macsec-secy-oper";
}

Macsec::~Macsec()
{
}

bool Macsec::has_data() const
{
    return (secy !=  nullptr && secy->has_data());
}

bool Macsec::has_operation() const
{
    return is_set(operation)
	|| (secy !=  nullptr && secy->has_operation());
}

std::string Macsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec";

    return path_buffer.str();

}

const EntityPath Macsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secy")
    {
        if(secy == nullptr)
        {
            secy = std::make_shared<Macsec::Secy>();
        }
        return secy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(secy != nullptr)
    {
        children["secy"] = secy;
    }

    return children;
}

void Macsec::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Macsec::clone_ptr() const
{
    return std::make_shared<Macsec>();
}

std::string Macsec::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Macsec::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Macsec::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Macsec::Secy::Secy()
    :
    interfaces(std::make_shared<Macsec::Secy::Interfaces>())
{
    interfaces->parent = this;

    yang_name = "secy"; yang_parent_name = "macsec";
}

Macsec::Secy::~Secy()
{
}

bool Macsec::Secy::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data());
}

bool Macsec::Secy::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Macsec::Secy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secy";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Macsec::Secy::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Macsec::Secy::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Secy::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "secy";
}

Macsec::Secy::Interfaces::~Interfaces()
{
}

bool Macsec::Secy::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Macsec::Secy::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Macsec::Secy::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec/secy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Macsec::Secy::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Macsec::Secy::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Secy::Interfaces::Interface::Interface()
    :
    name{YType::str, "name"}
    	,
    stats(std::make_shared<Macsec::Secy::Interfaces::Interface::Stats>())
{
    stats->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Macsec::Secy::Interfaces::Interface::~Interface()
{
}

bool Macsec::Secy::Interfaces::Interface::has_data() const
{
    return name.is_set
	|| (stats !=  nullptr && stats->has_data());
}

bool Macsec::Secy::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (stats !=  nullptr && stats->has_operation());
}

std::string Macsec::Secy::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-crypto-macsec-secy-oper:macsec/secy/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats")
    {
        if(stats == nullptr)
        {
            stats = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats>();
        }
        return stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stats != nullptr)
    {
        children["stats"] = stats;
    }

    return children;
}

void Macsec::Secy::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Macsec::Secy::Interfaces::Interface::Stats::Stats()
    :
    intf_stats(std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::IntfStats>())
	,tx_sc_stats(std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::TxScStats>())
{
    intf_stats->parent = this;

    tx_sc_stats->parent = this;

    yang_name = "stats"; yang_parent_name = "interface";
}

Macsec::Secy::Interfaces::Interface::Stats::~Stats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::has_data() const
{
    for (std::size_t index=0; index<rx_sc_stats.size(); index++)
    {
        if(rx_sc_stats[index]->has_data())
            return true;
    }
    return (intf_stats !=  nullptr && intf_stats->has_data())
	|| (tx_sc_stats !=  nullptr && tx_sc_stats->has_data());
}

bool Macsec::Secy::Interfaces::Interface::Stats::has_operation() const
{
    for (std::size_t index=0; index<rx_sc_stats.size(); index++)
    {
        if(rx_sc_stats[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (intf_stats !=  nullptr && intf_stats->has_operation())
	|| (tx_sc_stats !=  nullptr && tx_sc_stats->has_operation());
}

std::string Macsec::Secy::Interfaces::Interface::Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::Interfaces::Interface::Stats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stats' in Cisco_IOS_XR_crypto_macsec_secy_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::Interfaces::Interface::Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intf-stats")
    {
        if(intf_stats == nullptr)
        {
            intf_stats = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::IntfStats>();
        }
        return intf_stats;
    }

    if(child_yang_name == "rx-sc-stats")
    {
        for(auto const & c : rx_sc_stats)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::RxScStats>();
        c->parent = this;
        rx_sc_stats.push_back(c);
        return c;
    }

    if(child_yang_name == "tx-sc-stats")
    {
        if(tx_sc_stats == nullptr)
        {
            tx_sc_stats = std::make_shared<Macsec::Secy::Interfaces::Interface::Stats::TxScStats>();
        }
        return tx_sc_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::Interfaces::Interface::Stats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intf_stats != nullptr)
    {
        children["intf-stats"] = intf_stats;
    }

    for (auto const & c : rx_sc_stats)
    {
        children[c->get_segment_path()] = c;
    }

    if(tx_sc_stats != nullptr)
    {
        children["tx-sc-stats"] = tx_sc_stats;
    }

    return children;
}

void Macsec::Secy::Interfaces::Interface::Stats::set_value(const std::string & value_path, std::string value)
{
}

Macsec::Secy::Interfaces::Interface::Stats::IntfStats::IntfStats()
    :
    in_octets_decrypted{YType::uint64, "in-octets-decrypted"},
    in_octets_validated{YType::uint64, "in-octets-validated"},
    in_pkts_bad_tag{YType::uint64, "in-pkts-bad-tag"},
    in_pkts_no_sci{YType::uint64, "in-pkts-no-sci"},
    in_pkts_no_tag{YType::uint64, "in-pkts-no-tag"},
    in_pkts_overrun{YType::uint64, "in-pkts-overrun"},
    in_pkts_unknown_sci{YType::uint64, "in-pkts-unknown-sci"},
    in_pkts_untagged{YType::uint64, "in-pkts-untagged"},
    out_octets_encrypted{YType::uint64, "out-octets-encrypted"},
    out_octets_protected{YType::uint64, "out-octets-protected"},
    out_pkts_too_long{YType::uint64, "out-pkts-too-long"},
    out_pkts_untagged{YType::uint64, "out-pkts-untagged"}
{
    yang_name = "intf-stats"; yang_parent_name = "stats";
}

Macsec::Secy::Interfaces::Interface::Stats::IntfStats::~IntfStats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::IntfStats::has_data() const
{
    return in_octets_decrypted.is_set
	|| in_octets_validated.is_set
	|| in_pkts_bad_tag.is_set
	|| in_pkts_no_sci.is_set
	|| in_pkts_no_tag.is_set
	|| in_pkts_overrun.is_set
	|| in_pkts_unknown_sci.is_set
	|| in_pkts_untagged.is_set
	|| out_octets_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_pkts_too_long.is_set
	|| out_pkts_untagged.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::IntfStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_bad_tag.operation)
	|| is_set(in_pkts_no_sci.operation)
	|| is_set(in_pkts_no_tag.operation)
	|| is_set(in_pkts_overrun.operation)
	|| is_set(in_pkts_unknown_sci.operation)
	|| is_set(in_pkts_untagged.operation)
	|| is_set(out_octets_encrypted.operation)
	|| is_set(out_octets_protected.operation)
	|| is_set(out_pkts_too_long.operation)
	|| is_set(out_pkts_untagged.operation);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intf-stats";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IntfStats' in Cisco_IOS_XR_crypto_macsec_secy_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.operation)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_bad_tag.is_set || is_set(in_pkts_bad_tag.operation)) leaf_name_data.push_back(in_pkts_bad_tag.get_name_leafdata());
    if (in_pkts_no_sci.is_set || is_set(in_pkts_no_sci.operation)) leaf_name_data.push_back(in_pkts_no_sci.get_name_leafdata());
    if (in_pkts_no_tag.is_set || is_set(in_pkts_no_tag.operation)) leaf_name_data.push_back(in_pkts_no_tag.get_name_leafdata());
    if (in_pkts_overrun.is_set || is_set(in_pkts_overrun.operation)) leaf_name_data.push_back(in_pkts_overrun.get_name_leafdata());
    if (in_pkts_unknown_sci.is_set || is_set(in_pkts_unknown_sci.operation)) leaf_name_data.push_back(in_pkts_unknown_sci.get_name_leafdata());
    if (in_pkts_untagged.is_set || is_set(in_pkts_untagged.operation)) leaf_name_data.push_back(in_pkts_untagged.get_name_leafdata());
    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.operation)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.operation)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.operation)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (out_pkts_untagged.is_set || is_set(out_pkts_untagged.operation)) leaf_name_data.push_back(out_pkts_untagged.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::Interfaces::Interface::Stats::IntfStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Macsec::Secy::Interfaces::Interface::Stats::IntfStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-bad-tag")
    {
        in_pkts_bad_tag = value;
    }
    if(value_path == "in-pkts-no-sci")
    {
        in_pkts_no_sci = value;
    }
    if(value_path == "in-pkts-no-tag")
    {
        in_pkts_no_tag = value;
    }
    if(value_path == "in-pkts-overrun")
    {
        in_pkts_overrun = value;
    }
    if(value_path == "in-pkts-unknown-sci")
    {
        in_pkts_unknown_sci = value;
    }
    if(value_path == "in-pkts-untagged")
    {
        in_pkts_untagged = value;
    }
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
    }
    if(value_path == "out-pkts-untagged")
    {
        out_pkts_untagged = value;
    }
}

Macsec::Secy::Interfaces::Interface::Stats::TxScStats::TxScStats()
    :
    out_octets_encrypted{YType::uint64, "out-octets-encrypted"},
    out_octets_protected{YType::uint64, "out-octets-protected"},
    out_pkts_encrypted{YType::uint64, "out-pkts-encrypted"},
    out_pkts_protected{YType::uint64, "out-pkts-protected"},
    out_pkts_too_long{YType::uint64, "out-pkts-too-long"},
    tx_sci{YType::uint64, "tx-sci"}
{
    yang_name = "tx-sc-stats"; yang_parent_name = "stats";
}

Macsec::Secy::Interfaces::Interface::Stats::TxScStats::~TxScStats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::has_data() const
{
    return out_octets_encrypted.is_set
	|| out_octets_protected.is_set
	|| out_pkts_encrypted.is_set
	|| out_pkts_protected.is_set
	|| out_pkts_too_long.is_set
	|| tx_sci.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::TxScStats::has_operation() const
{
    return is_set(operation)
	|| is_set(out_octets_encrypted.operation)
	|| is_set(out_octets_protected.operation)
	|| is_set(out_pkts_encrypted.operation)
	|| is_set(out_pkts_protected.operation)
	|| is_set(out_pkts_too_long.operation)
	|| is_set(tx_sci.operation);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx-sc-stats";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TxScStats' in Cisco_IOS_XR_crypto_macsec_secy_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_octets_encrypted.is_set || is_set(out_octets_encrypted.operation)) leaf_name_data.push_back(out_octets_encrypted.get_name_leafdata());
    if (out_octets_protected.is_set || is_set(out_octets_protected.operation)) leaf_name_data.push_back(out_octets_protected.get_name_leafdata());
    if (out_pkts_encrypted.is_set || is_set(out_pkts_encrypted.operation)) leaf_name_data.push_back(out_pkts_encrypted.get_name_leafdata());
    if (out_pkts_protected.is_set || is_set(out_pkts_protected.operation)) leaf_name_data.push_back(out_pkts_protected.get_name_leafdata());
    if (out_pkts_too_long.is_set || is_set(out_pkts_too_long.operation)) leaf_name_data.push_back(out_pkts_too_long.get_name_leafdata());
    if (tx_sci.is_set || is_set(tx_sci.operation)) leaf_name_data.push_back(tx_sci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::Interfaces::Interface::Stats::TxScStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Macsec::Secy::Interfaces::Interface::Stats::TxScStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out-octets-encrypted")
    {
        out_octets_encrypted = value;
    }
    if(value_path == "out-octets-protected")
    {
        out_octets_protected = value;
    }
    if(value_path == "out-pkts-encrypted")
    {
        out_pkts_encrypted = value;
    }
    if(value_path == "out-pkts-protected")
    {
        out_pkts_protected = value;
    }
    if(value_path == "out-pkts-too-long")
    {
        out_pkts_too_long = value;
    }
    if(value_path == "tx-sci")
    {
        tx_sci = value;
    }
}

Macsec::Secy::Interfaces::Interface::Stats::RxScStats::RxScStats()
    :
    in_octets_decrypted{YType::uint64, "in-octets-decrypted"},
    in_octets_validated{YType::uint64, "in-octets-validated"},
    in_pkts_delayed{YType::uint64, "in-pkts-delayed"},
    in_pkts_invalid{YType::uint64, "in-pkts-invalid"},
    in_pkts_late{YType::uint64, "in-pkts-late"},
    in_pkts_not_using_sa{YType::uint64, "in-pkts-not-using-sa"},
    in_pkts_not_valid{YType::uint64, "in-pkts-not-valid"},
    in_pkts_ok{YType::uint64, "in-pkts-ok"},
    in_pkts_unchecked{YType::uint64, "in-pkts-unchecked"},
    in_pkts_untagged_hit{YType::uint64, "in-pkts-untagged-hit"},
    in_pkts_unused_sa{YType::uint64, "in-pkts-unused-sa"},
    rx_sci{YType::uint64, "rx-sci"}
{
    yang_name = "rx-sc-stats"; yang_parent_name = "stats";
}

Macsec::Secy::Interfaces::Interface::Stats::RxScStats::~RxScStats()
{
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::has_data() const
{
    return in_octets_decrypted.is_set
	|| in_octets_validated.is_set
	|| in_pkts_delayed.is_set
	|| in_pkts_invalid.is_set
	|| in_pkts_late.is_set
	|| in_pkts_not_using_sa.is_set
	|| in_pkts_not_valid.is_set
	|| in_pkts_ok.is_set
	|| in_pkts_unchecked.is_set
	|| in_pkts_untagged_hit.is_set
	|| in_pkts_unused_sa.is_set
	|| rx_sci.is_set;
}

bool Macsec::Secy::Interfaces::Interface::Stats::RxScStats::has_operation() const
{
    return is_set(operation)
	|| is_set(in_octets_decrypted.operation)
	|| is_set(in_octets_validated.operation)
	|| is_set(in_pkts_delayed.operation)
	|| is_set(in_pkts_invalid.operation)
	|| is_set(in_pkts_late.operation)
	|| is_set(in_pkts_not_using_sa.operation)
	|| is_set(in_pkts_not_valid.operation)
	|| is_set(in_pkts_ok.operation)
	|| is_set(in_pkts_unchecked.operation)
	|| is_set(in_pkts_untagged_hit.operation)
	|| is_set(in_pkts_unused_sa.operation)
	|| is_set(rx_sci.operation);
}

std::string Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx-sc-stats";

    return path_buffer.str();

}

const EntityPath Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RxScStats' in Cisco_IOS_XR_crypto_macsec_secy_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_octets_decrypted.is_set || is_set(in_octets_decrypted.operation)) leaf_name_data.push_back(in_octets_decrypted.get_name_leafdata());
    if (in_octets_validated.is_set || is_set(in_octets_validated.operation)) leaf_name_data.push_back(in_octets_validated.get_name_leafdata());
    if (in_pkts_delayed.is_set || is_set(in_pkts_delayed.operation)) leaf_name_data.push_back(in_pkts_delayed.get_name_leafdata());
    if (in_pkts_invalid.is_set || is_set(in_pkts_invalid.operation)) leaf_name_data.push_back(in_pkts_invalid.get_name_leafdata());
    if (in_pkts_late.is_set || is_set(in_pkts_late.operation)) leaf_name_data.push_back(in_pkts_late.get_name_leafdata());
    if (in_pkts_not_using_sa.is_set || is_set(in_pkts_not_using_sa.operation)) leaf_name_data.push_back(in_pkts_not_using_sa.get_name_leafdata());
    if (in_pkts_not_valid.is_set || is_set(in_pkts_not_valid.operation)) leaf_name_data.push_back(in_pkts_not_valid.get_name_leafdata());
    if (in_pkts_ok.is_set || is_set(in_pkts_ok.operation)) leaf_name_data.push_back(in_pkts_ok.get_name_leafdata());
    if (in_pkts_unchecked.is_set || is_set(in_pkts_unchecked.operation)) leaf_name_data.push_back(in_pkts_unchecked.get_name_leafdata());
    if (in_pkts_untagged_hit.is_set || is_set(in_pkts_untagged_hit.operation)) leaf_name_data.push_back(in_pkts_untagged_hit.get_name_leafdata());
    if (in_pkts_unused_sa.is_set || is_set(in_pkts_unused_sa.operation)) leaf_name_data.push_back(in_pkts_unused_sa.get_name_leafdata());
    if (rx_sci.is_set || is_set(rx_sci.operation)) leaf_name_data.push_back(rx_sci.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Macsec::Secy::Interfaces::Interface::Stats::RxScStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Macsec::Secy::Interfaces::Interface::Stats::RxScStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in-octets-decrypted")
    {
        in_octets_decrypted = value;
    }
    if(value_path == "in-octets-validated")
    {
        in_octets_validated = value;
    }
    if(value_path == "in-pkts-delayed")
    {
        in_pkts_delayed = value;
    }
    if(value_path == "in-pkts-invalid")
    {
        in_pkts_invalid = value;
    }
    if(value_path == "in-pkts-late")
    {
        in_pkts_late = value;
    }
    if(value_path == "in-pkts-not-using-sa")
    {
        in_pkts_not_using_sa = value;
    }
    if(value_path == "in-pkts-not-valid")
    {
        in_pkts_not_valid = value;
    }
    if(value_path == "in-pkts-ok")
    {
        in_pkts_ok = value;
    }
    if(value_path == "in-pkts-unchecked")
    {
        in_pkts_unchecked = value;
    }
    if(value_path == "in-pkts-untagged-hit")
    {
        in_pkts_untagged_hit = value;
    }
    if(value_path == "in-pkts-unused-sa")
    {
        in_pkts_unused_sa = value;
    }
    if(value_path == "rx-sci")
    {
        rx_sci = value;
    }
}


}
}

